// Fill out your copyright notice in the Description page of Project Settings.

#include "ForceTubeVRFunctions.h"
#include "ForceTubeVRForUE4PrivatePCH.h"
#include "ForceTubeVRForUE4.h"


#if PLATFORM_ANDROID

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

enum class ForceTubeVRChannelInt { all, rifle, rifleButt, rifleBolt, pistol1, pistol2, other, vest };
typedef void(*_InitRifle)(); // Declare a method to store the DLL method InitRifle. 
typedef void(*_InitPistol)(); // Declare a method to store the DLL method InitPistol. 
typedef void(*_Kick)(uint8 power, ForceTubeVRChannelInt channel); // Declare a method to store the DLL method Kick. 
typedef void(*_Rumble)(uint8 power, float timeInSeconds, ForceTubeVRChannelInt channel); // Declare a method to store the DLL method Rumble. 
typedef void(*_Shot)(uint8 kickPower, uint8 rumblePower, float rumbleDuration, ForceTubeVRChannelInt channel); // Declare a method to store the DLL method Kick. 
typedef void(*_SetActiveResearch)(bool active); // Declare a method to store the DLL method SetActive. 
typedef uint8(*_TempoToKickPower)(float tempo); // Declare a method to store the DLL method TempoToKickPower.
typedef uint8(*_GetBatteryLevel)(); // Declare a method to store the DLL method GetBatteryLevel.


void *v_dllHandle;


_InitRifle m_InitAsyncRifle;
_InitPistol m_InitAsyncPistols;
_Kick m_KickFromDll;
_Rumble m_RumbleFromDll;
_Shot m_ShotFromDll;
_SetActiveResearch m_SetActiveFromDll;
_TempoToKickPower m_TempoToKickPowerFromDll;
_GetBatteryLevel m_GetBatteryLevelFromDll;


#pragma region Load DLL

bool UForceTubeVRFunctions::LoadForceTubeVR() {
	if (!importDLL()) {
		return false;
	}
	#if PLATFORM_WINDOWS
		if (!importMethodWindows<_InitRifle>("InitRifle", &m_InitAsyncRifle)) {
			return false;
		}
		if (!importMethodWindows<_InitPistol>("InitPistol", &m_InitAsyncPistols)) {
			return false;
		}
		if (!importMethodWindows<_Kick>("KickChannel", &m_KickFromDll)) {
			return false;
		}
		if (!importMethodWindows<_Rumble>("RumbleChannel", &m_RumbleFromDll)) {
			return false;
		}
		if (!importMethodWindows<_Shot>("ShotChannel", &m_ShotFromDll)) {
			return false;
		}
		if (!importMethodWindows<_SetActiveResearch>("SetActive", &m_SetActiveFromDll)) {
			return false;
		}
		if (!importMethodWindows<_TempoToKickPower>("TempoToKickPower", &m_TempoToKickPowerFromDll)) {
			return false;
		}
		if (!importMethodWindows<_GetBatteryLevel>("GetBatteryLevel", &m_GetBatteryLevelFromDll)) {
			return false;
		}
	#else
		#if PLATFORM_ANDROID
		if (!importMethodAndroid("InitForceTubeVR", "(Landroid/app/Activity;Z)V", &JInit)) {
				return false;
			}
			if (!importMethodAndroid("Kick", "(BI)V", &JKick)) {
				return false;
			}
			if (!importMethodAndroid("Rumble", "(BFI)V", &JRumble)) {
				return false;
			}
			if (!importMethodAndroid("Shoot", "(BBFI)V", &JShoot)) {
				return false;
			}
			if (!importMethodAndroid("SetActiveResearch", "(Z)V", &JSetActiveResearch)) {
				return false;
			}
			if (!importMethodAndroid("TempoToKickPower", "(F)B", &JTempoToKickPower)) {
				return false;
			}
			if (!importMethodAndroid("GetBatteryLevel", "()I", &JGetBatteryLevel)) {
				return false;
			}
			if (!importMethodAndroid("OpenBluetoothSettings", "()V", &JOpenBluetoothSettings)) {
				return false;
			}
		#endif
	#endif
	return true;
}

// Method to import a DLL. 
bool UForceTubeVRFunctions::importDLL() {
	#if PLATFORM_WINDOWS
		#ifdef _WIN64
			FString filePath = *FPaths::ProjectDir().Append("Plugins/ForceTubeVRForUE4/ForceTubeVR_API_x64.dll");
			//FString filePath = *FPaths::ProjectDir().Append("Plugins/ForceTubeVRForUE4/ForceTubeVR_API_x64.dll");
		#else
			FString filePath = *FPaths::ProjectDir().Append("Plugins/ForceTubeVRForUE4/ForceTubeVR_API_x32.dll");
			//FString filePath = *FPaths::ProjectDir().Append("Plugins/ForceTubeVRForUE4/ForceTubeVR_API_x32.dll");
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

template<class Signature> bool UForceTubeVRFunctions::importMethodWindows(FString methodName, Signature* methodSocket) {
	if (v_dllHandle != NULL) {
		*methodSocket = NULL;
		*methodSocket = (Signature)FPlatformProcess::GetDllExport(v_dllHandle, *methodName);
		if (*methodSocket != NULL) {
			return true;
		}
	}
	return false;
}

#if PLATFORM_ANDROID

bool UForceTubeVRFunctions::importMethodAndroid(const char* methodName, const char* methodParams, jmethodID* methodSocket) {
	if (Env) {
		*methodSocket = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, methodName, methodParams, false);
		if (!methodSocket) {
			return false;
		} else {
			return true;
		}
	} else {
		return false;
	}
}

#endif

#pragma endregion Load DLL

#pragma region Method Calls

void UForceTubeVRFunctions::InitAsync(bool pistolsFirst) {
	#if PLATFORM_WINDOWS
		if (pistolsFirst) {
			if (m_InitAsyncPistols != NULL) {
				m_InitAsyncPistols();
			}
		} else {
			if (m_InitAsyncRifle != NULL) {
				m_InitAsyncRifle();
			}
		}
	#else
		if (JInit != NULL) {
			FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JInit, FJavaWrapper::GameActivityThis, pistolsFirst);
		}
	#endif
}

ForceTubeVRChannelInt ChannelToInt(ForceTubeVRChannel channel) {
	switch (channel) {
		case ForceTubeVRChannel::all:
			return ForceTubeVRChannelInt::all;
		case ForceTubeVRChannel::rifle:
			return ForceTubeVRChannelInt::rifle;
		case ForceTubeVRChannel::rifleButt:
			return ForceTubeVRChannelInt::rifleButt;
		case ForceTubeVRChannel::rifleBolt:
			return ForceTubeVRChannelInt::rifleBolt;
		case ForceTubeVRChannel::pistol1:
			return ForceTubeVRChannelInt::pistol1;
		case ForceTubeVRChannel::pistol2:
			return ForceTubeVRChannelInt::pistol2;
		case ForceTubeVRChannel::other:
			return ForceTubeVRChannelInt::other;
		case ForceTubeVRChannel::vest:
			return ForceTubeVRChannelInt::vest;
		default:
			return ForceTubeVRChannelInt::all;
	}
}

void UForceTubeVRFunctions::Kick(uint8 power, ForceTubeVRChannel channel) {
	#if PLATFORM_WINDOWS
		if (m_KickFromDll != NULL) {
			if (GEngine) {
				GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, TEXT(""));
			}
			m_KickFromDll(power, ChannelToInt(channel)); // Call the DLL method with arguments corresponding to the exact signature and return type of the method. 
		}
	#else
		if (JKick != NULL) {
			FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JKick, (int8) power, (int) channel);
		}
	#endif
}

void UForceTubeVRFunctions::Rumble(uint8 power, float timeInSeconds, ForceTubeVRChannel channel) {
	#if PLATFORM_WINDOWS
		if (m_RumbleFromDll != NULL) {
			if (GEngine) {
				GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, TEXT(""));
			}
			m_RumbleFromDll(power, timeInSeconds, ChannelToInt(channel)); // Call the DLL method with arguments corresponding to the exact signature and return type of the method.
		}
	#else
		if (JRumble != NULL) {
			FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JRumble, (int8) power, timeInSeconds, (int) channel);
		}
	#endif
}

void UForceTubeVRFunctions::Shot(uint8 kickPower, uint8 rumblePower, float rumbleDuration, ForceTubeVRChannel channel) {
	#if PLATFORM_WINDOWS
		if (m_ShotFromDll != NULL) {
			if (GEngine) {
				GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, TEXT(""));
			}
			m_ShotFromDll(kickPower, rumblePower, rumbleDuration, ChannelToInt(channel)); // Call the DLL method with arguments corresponding to the exact signature and return type of the method.
		}
	#else
		if (JShoot != NULL) {
			FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JShoot, (int8) kickPower, (int8) rumblePower, rumbleDuration, (int) channel);
		}
	#endif
}

void UForceTubeVRFunctions::SetActiveResearch(bool active) {
	#if PLATFORM_WINDOWS
		if (m_SetActiveFromDll != NULL) {
			m_SetActiveFromDll(active);
		}
	#else
		if (JSetActiveResearch != NULL) {
			FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JSetActiveResearch, active);
		}
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
		if (JTempoToKickPower != NULL) {
			return FJavaWrapper::CallIntMethod(Env, FJavaWrapper::GameActivityThis, JTempoToKickPower, tempo);
		} else {
			return 0;
		}
		
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
		if (JGetBatteryLevel != NULL) {
			return (uint8)FJavaWrapper::CallIntMethod(Env, FJavaWrapper::GameActivityThis, JGetBatteryLevel);
		} else {
			return 0;
		}
	#endif
}

void UForceTubeVRFunctions::OpenAndroidBluetoothSettings() {
	#if PLATFORM_ANDROID
		if (JOpenBluetoothSettings != NULL) {
			FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JOpenBluetoothSettings);
		}
	#endif
}

#pragma endregion Method Calls

#pragma region Unload DLL

void UForceTubeVRFunctions::FreeDLL() {
	#if PLATFORM_WINDOWS
		if (v_dllHandle != NULL) {
			m_InitAsyncRifle = NULL;
			m_InitAsyncPistols = NULL;
			m_KickFromDll = NULL;
			m_RumbleFromDll = NULL;
			m_ShotFromDll = NULL;
			m_SetActiveFromDll = NULL;
			m_TempoToKickPowerFromDll = NULL;
			FPlatformProcess::FreeDllHandle(v_dllHandle);
			v_dllHandle = NULL;
		}
	#endif
}

#pragma endregion Unload DLL