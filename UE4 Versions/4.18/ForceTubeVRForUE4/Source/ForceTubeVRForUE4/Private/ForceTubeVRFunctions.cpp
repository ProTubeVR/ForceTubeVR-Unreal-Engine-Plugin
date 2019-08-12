// Fill out your copyright notice in the Description page of Project Settings.

#include "ForceTubeVRForUE4PrivatePCH.h"
#include "ForceTubeVRForUE4.h"
#include "ForceTubeVRFunctions.h"


#if PLATFORM_ANDROID

#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#include <android_native_app_glue.h>

extern struct android_app* GNativeAndroidApp;


JNIEnv* Env;
jmethodID JInit;
jmethodID JKick;
jmethodID JRumble;
jmethodID JShoot;
jmethodID JSetActiveResearch;
jmethodID JTempoToKickPower;
jmethodID JGetBatteryLevel;
jmethodID JOpenBluetoothSettings;

#endif

typedef void(*_Kick)(uint8 power); // Declare a method to store the DLL method Kick. 
typedef void(*_Rumble)(uint8 power, float timeInSeconds); // Declare a method to store the DLL method Rumble. 
typedef void(*_Shot)(uint8 kickPower, uint8 rumblePower, float rumbleDuration); // Declare a method to store the DLL method Kick. 
typedef void(*_SetActiveResearch)(bool active); // Declare a method to store the DLL method SetActive. 
typedef void(*_InitAsync)(); // Declare a method to store the DLL method SetActive. 
typedef uint8(*_TempoToKickPower)(float tempo); // Declare a method to store the DLL method TempoToKickPower.
typedef uint8(*_GetBatteryLevel)(); // Declare a method to store the DLL method GetBatteryLevel.

void *v_dllHandle;

_Kick m_KickFromDll;
_Rumble m_RumbleFromDll;
_Shot m_ShotFromDll;
_SetActiveResearch m_SetActiveFromDll;
_InitAsync m_InitAsyncFromDll;
_TempoToKickPower m_TempoToKickPowerFromDll;
_GetBatteryLevel m_GetBatteryLevelFromDll;


#pragma region Load DLL

bool UForceTubeVRFunctions::LoadForceTubeVR() {
	
	if (!importDLL()) {
		return false;
	}
	if (!importMethodInitAsync()) {
		return false;
	}
	if (!importMethodKick()) {
		return false;
	}
	if (!importMethodRumble()) {
		return false;
	}
	if (!importMethodShot()) {
		return false;
	}
	if (!importMethodSetActive()) {
		return false;
	}
	if (!importMethodTempoToKickPower()) {
		return false;
	}
	if (!importMethodGetBatteryLevel()) {
		return false;
	}
	if (!importMethodOpenAndroidBluetoothSettings()) {
		return false;
	}
	InitAsync();
	return true;
}

// Method to import a DLL. 
bool UForceTubeVRFunctions::importDLL() {
	#if PLATFORM_WINDOWS
		#ifdef _WIN64
			//FString filePath = *FPaths::GameDir().Append("Plugins/ForceTubeVRForUE4/ForceTubeVR_API_x64.dll");
			FString filePath = *FPaths::ProjectDir().Append("Plugins/ForceTubeVRForUE4/ForceTubeVR_API_x64.dll");
		#else
			//FString filePath = *FPaths::GameDir().Append("Plugins/ForceTubeVRForUE4/ForceTubeVR_API_x32.dll");
			FString filePath = *FPaths::ProjectDir().Append("Plugins/ForceTubeVRForUE4/ForceTubeVR_API_x32.dll");
		#endif
		if (FPaths::FileExists(filePath)) {
			v_dllHandle = FPlatformProcess::GetDllHandle(*filePath); // Retrieve the DLL. 
			if (v_dllHandle != NULL) {
				return true;
			}
		}
		return false;	// Return an error. 
	#else
		#if PLATFORM_ANDROID
			Env = FAndroidApplication::GetJavaEnv(true);
			if (Env) {
				__android_log_print(ANDROID_LOG_VERBOSE, "JNI", "Found java environment");
				return true;
			} else {
				__android_log_print(ANDROID_LOG_VERBOSE, "JNI", "No java environment");
				return false;
			}
		#endif
	#endif
}

#pragma endregion Load DLL

#pragma region Import Methods

bool UForceTubeVRFunctions::importMethodInitAsync() {
	#if PLATFORM_WINDOWS
		if (v_dllHandle != NULL) {
			m_InitAsyncFromDll = NULL;
			FString procName = "InitAsync";	// Needs to be the exact name of the DLL method. 
			m_InitAsyncFromDll = (_InitAsync)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
			if (m_InitAsyncFromDll != NULL) {
				return true;
			}
		}
	return false;
	#else
		JInit = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "InitForceTubeVR", "()V", false);
		if (!JInit) {
			__android_log_print(ANDROID_LOG_VERBOSE, "JNI", "No InitMethod");
			return false;
		} else {
			__android_log_print(ANDROID_LOG_VERBOSE, "JNI", "Found InitMethod");
			return true;
		}
	#endif
}

// Imports the method getInvertedBool from the DLL. 
bool UForceTubeVRFunctions::importMethodKick() {
	#if PLATFORM_WINDOWS
		if (v_dllHandle != NULL) {
			m_KickFromDll = NULL;
			FString procName = "Kick";	// Needs to be the exact name of the DLL method. 
			m_KickFromDll = (_Kick)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
			if (m_KickFromDll != NULL) {
				return true;
			}
		}
		return false;	// Return an error. 
	#else
		JKick = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "Kick", "(B)V", false);
		if (!JKick) {
			return false;
		} else {
			return true;
		}
	#endif
}

bool UForceTubeVRFunctions::importMethodRumble() {
	#if PLATFORM_WINDOWS
		if (v_dllHandle != NULL) {
			m_RumbleFromDll = NULL;
			FString procName = "Rumble";	// Needs to be the exact name of the DLL method. 
			m_RumbleFromDll = (_Rumble)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
			if (m_RumbleFromDll != NULL) {
				return true;
			}
		}
		return false;	// Return an error. 
	#else
		JRumble = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "Rumble", "(BF)V", false);
		if (!JRumble) {
			return false;
		} else {
			return true;
		}
	#endif
}

bool UForceTubeVRFunctions::importMethodShot() {
	#if PLATFORM_WINDOWS
		if (v_dllHandle != NULL) {
			m_ShotFromDll = NULL;
			FString procName = "Shot";	// Needs to be the exact name of the DLL method. 
			m_ShotFromDll = (_Shot)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
			if (m_ShotFromDll != NULL) {
				return true;
			}
		}
		return false;
	#else
		JShoot = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "Shoot", "(BBF)V", false);
		if (!JShoot) {
			return false;
		} else {
			return true;
		}
	#endif
}

bool UForceTubeVRFunctions::importMethodSetActive() {
#if PLATFORM_WINDOWS
	if (v_dllHandle != NULL) {
		m_SetActiveFromDll = NULL;
		FString procName = "SetActive";	// Needs to be the exact name of the DLL method. 
		m_SetActiveFromDll = (_SetActiveResearch)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_SetActiveFromDll != NULL) {
			return true;
		}
	}
	return false;
#else
	JSetActiveResearch = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "SetActiveResearch", "(Z)V", false);
	if (!JSetActiveResearch) {
		return false;
	} else {
		return true;
	}
#endif
}

bool UForceTubeVRFunctions::importMethodTempoToKickPower() {
	#if PLATFORM_WINDOWS
		if (v_dllHandle != NULL) {
			m_TempoToKickPowerFromDll = NULL;
			FString procName = "TempoToKickPower";	// Needs to be the exact name of the DLL method. 
					m_TempoToKickPowerFromDll = (_TempoToKickPower)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
			if (m_TempoToKickPowerFromDll != NULL) {
				return true;
			}
		}
		return false;
	#else
		JTempoToKickPower = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "TempoToKickPower", "(F)B", false);
		if (!JTempoToKickPower) {
			return false;
		} else {
			return true;
		}
	#endif
}

bool UForceTubeVRFunctions::importMethodGetBatteryLevel() {
	#if PLATFORM_WINDOWS
		if (v_dllHandle != NULL) {
			m_GetBatteryLevelFromDll = NULL;
			FString procName = "GetBatteryLevel";	// Needs to be the exact name of the DLL method. 
			m_GetBatteryLevelFromDll = (_GetBatteryLevel)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
			if (m_GetBatteryLevelFromDll != NULL) {
				return true;
			}
		}
		return false;
	#else
		JGetBatteryLevel = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "GetBatteryLevel", "()I", false);
		if (!JGetBatteryLevel) {
			return false;
		}
		else {
			return true;
		}
	#endif
}

bool UForceTubeVRFunctions::importMethodOpenAndroidBluetoothSettings() {
	#if PLATFORM_ANDROID
		JOpenBluetoothSettings = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "OpenBluetoothSettings", "(Z)V", false);
		if (!JOpenBluetoothSettings) {
			return false;
		}
		else {
			return true;
		}
	#else
		return true;
	#endif
}

#pragma endregion Import Methods

#pragma region Method Calls

void UForceTubeVRFunctions::InitAsync() {
	#if PLATFORM_WINDOWS
		if (m_InitAsyncFromDll != NULL) {
			m_InitAsyncFromDll();
		}
	#else
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JInit);
	#endif
}

void UForceTubeVRFunctions::Kick(uint8 power) {
	#if PLATFORM_WINDOWS
		if (m_KickFromDll != NULL) {
			m_KickFromDll(power); // Call the DLL method with arguments corresponding to the exact signature and return type of the method. 
		}
	#else
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JKick, power);
	#endif
}

void UForceTubeVRFunctions::Rumble(uint8 power, float timeInSeconds) {
	#if PLATFORM_WINDOWS
		if (m_RumbleFromDll != NULL) {
			m_RumbleFromDll(power, timeInSeconds); // Call the DLL method with arguments corresponding to the exact signature and return type of the method.
		}
	#else
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JRumble, power, timeInSeconds);
	#endif
}

void UForceTubeVRFunctions::Shot(uint8 kickPower, uint8 rumblePower, float rumbleDuration) {
	#if PLATFORM_WINDOWS
		if (m_ShotFromDll != NULL) {
			m_ShotFromDll(kickPower, rumblePower, rumbleDuration); // Call the DLL method with arguments corresponding to the exact signature and return type of the method.
		}
	#else
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JShoot, kickPower, rumblePower, rumbleDuration);
	#endif
}

void UForceTubeVRFunctions::SetActiveResearch(bool active) {
	#if PLATFORM_WINDOWS
		if (m_SetActiveFromDll != NULL) {
			m_SetActiveFromDll(active);
		}
	#else
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JSetActiveResearch, active);
	#endif
}

uint8 UForceTubeVRFunctions::TempoToKickPower(float tempo) {
	#if PLATFORM_WINDOWS
		if (m_TempoToKickPowerFromDll != NULL) {
			return m_TempoToKickPowerFromDll(tempo);
		} else {
			return 0;
		}
	#else
		return FJavaWrapper::CallIntMethod(Env, FJavaWrapper::GameActivityThis, JTempoToKickPower, tempo);
	#endif
}

uint8 UForceTubeVRFunctions::GetBatteryLevel() {
	#if PLATFORM_WINDOWS
		if (m_GetBatteryLevelFromDll != NULL) {
			return m_GetBatteryLevelFromDll();
		}
		else {
			return 0;
		}
	#else
		return (uint8)FJavaWrapper::CallIntMethod(Env, FJavaWrapper::GameActivityThis, JGetBatteryLevel);
	#endif
}

void UForceTubeVRFunctions::OpenAndroidBluetoothSettings(bool isInVR) {
	#if PLATFORM_ANDROID
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JOpenBluetoothSettings, isInVR);
	#endif
}

#pragma endregion Method Calls

#pragma region Unload DLL

void UForceTubeVRFunctions::FreeDLL() {
	#if PLATFORM_WINDOWS
		if (v_dllHandle != NULL) {
			m_InitAsyncFromDll = NULL;
			m_KickFromDll = NULL;
			m_RumbleFromDll = NULL;
			m_ShotFromDll = NULL;
			m_SetActiveFromDll = NULL;
			m_TempoToKickPowerFromDll = NULL;
			FPlatformProcess::FreeDllHandle(v_dllHandle); v_dllHandle = NULL;
		}
	#endif
}

#pragma endregion Unload DLL