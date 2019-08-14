// Fill out your copyright notice in the Description page of Project Settings.

#include "ForceTubeVRForUE4PrivatePCH.h"
#include "ForceTubeVRForUE4.h"
#include "ForceTubeVRFunctions.h"


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
	InitAsync();
	return true;
}

// Method to import a DLL. 
bool UForceTubeVRFunctions::importDLL() {
	#ifdef _WIN64
		FString filePath = *FPaths::GameDir().Append("Plugins/ForceTubeVRForUE4/ForceTubeVR_API_x64.dll");
		//FString filePath = *FPaths::ProjectDir().Append("Plugins/ForceTubeVRForUE4/ForceTubeVR_API_x64.dll");
	#else
		FString filePath = *FPaths::GameDir().Append("Plugins/ForceTubeVRForUE4/ForceTubeVR_API_x32.dll");
		//FString filePath = *FPaths::ProjectDir().Append("Plugins/ForceTubeVRForUE4/ForceTubeVR_API_x32.dll");
	#endif
	if (FPaths::FileExists(filePath)) {
		v_dllHandle = FPlatformProcess::GetDllHandle(*filePath); // Retrieve the DLL. 
		if (v_dllHandle != NULL) {
			return true;
		}
	}
	return false;	// Return an error.
}

#pragma endregion Load DLL

#pragma region Import Methods

bool UForceTubeVRFunctions::importMethodInitAsync() {
	if (v_dllHandle != NULL) {
		m_InitAsyncFromDll = NULL;
		FString procName = "InitAsync";	// Needs to be the exact name of the DLL method. 
		m_InitAsyncFromDll = (_InitAsync)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_InitAsyncFromDll != NULL) {
			return true;
		}
	}
	return false;
}

// Imports the method getInvertedBool from the DLL. 
bool UForceTubeVRFunctions::importMethodKick() {
	if (v_dllHandle != NULL) {
		m_KickFromDll = NULL;
		FString procName = "Kick";	// Needs to be the exact name of the DLL method. 
		m_KickFromDll = (_Kick)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_KickFromDll != NULL) {
			return true;
		}
	}
	return false;	// Return an error. 
}

bool UForceTubeVRFunctions::importMethodRumble() {
	if (v_dllHandle != NULL) {
		m_RumbleFromDll = NULL;
		FString procName = "Rumble";	// Needs to be the exact name of the DLL method. 
		m_RumbleFromDll = (_Rumble)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_RumbleFromDll != NULL) {
			return true;
		}
	}
	return false;	// Return an error.
}

bool UForceTubeVRFunctions::importMethodShot() {
	if (v_dllHandle != NULL) {
		m_ShotFromDll = NULL;
		FString procName = "Shot";	// Needs to be the exact name of the DLL method. 
		m_ShotFromDll = (_Shot)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_ShotFromDll != NULL) {
			return true;
		}
	}
	return false;
}

bool UForceTubeVRFunctions::importMethodSetActive() {
	if (v_dllHandle != NULL) {
		m_SetActiveFromDll = NULL;
		FString procName = "SetActive";	// Needs to be the exact name of the DLL method. 
		m_SetActiveFromDll = (_SetActiveResearch)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_SetActiveFromDll != NULL) {
			return true;
		}
	}
	return false;
}

bool UForceTubeVRFunctions::importMethodTempoToKickPower() {
	if (v_dllHandle != NULL) {
		m_TempoToKickPowerFromDll = NULL;
		FString procName = "TempoToKickPower";	// Needs to be the exact name of the DLL method. 
				m_TempoToKickPowerFromDll = (_TempoToKickPower)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_TempoToKickPowerFromDll != NULL) {
			return true;
		}
	}
	return false;
}

bool UForceTubeVRFunctions::importMethodGetBatteryLevel() {
	if (v_dllHandle != NULL) {
		m_GetBatteryLevelFromDll = NULL;
		FString procName = "GetBatteryLevel";	// Needs to be the exact name of the DLL method. 
		m_GetBatteryLevelFromDll = (_GetBatteryLevel)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (m_GetBatteryLevelFromDll != NULL) {
			return true;
		}
	}
	return false;
}

#pragma endregion Import Methods

#pragma region Method Calls

void UForceTubeVRFunctions::InitAsync() {
	if (m_InitAsyncFromDll != NULL) {
		m_InitAsyncFromDll();
	}
}

void UForceTubeVRFunctions::Kick(uint8 power) {
	if (m_KickFromDll != NULL) {
		m_KickFromDll(power); // Call the DLL method with arguments corresponding to the exact signature and return type of the method. 
	}
}

void UForceTubeVRFunctions::Rumble(uint8 power, float timeInSeconds) {
	if (m_RumbleFromDll != NULL) {
		m_RumbleFromDll(power, timeInSeconds); // Call the DLL method with arguments corresponding to the exact signature and return type of the method.
	}
}

void UForceTubeVRFunctions::Shot(uint8 kickPower, uint8 rumblePower, float rumbleDuration) {
	if (m_ShotFromDll != NULL) {
		m_ShotFromDll(kickPower, rumblePower, rumbleDuration); // Call the DLL method with arguments corresponding to the exact signature and return type of the method.
	}
}

void UForceTubeVRFunctions::SetActiveResearch(bool active) {
	if (m_SetActiveFromDll != NULL) {
		m_SetActiveFromDll(active);
	}
}

uint8 UForceTubeVRFunctions::TempoToKickPower(float tempo) {
	if (m_TempoToKickPowerFromDll != NULL) {
		return m_TempoToKickPowerFromDll(tempo);
	} else {
		return 0;
	}
}

uint8 UForceTubeVRFunctions::GetBatteryLevel() {
	if (m_GetBatteryLevelFromDll != NULL) {
		return m_GetBatteryLevelFromDll();
	}
	else {
		return 0;
	}
}

#pragma endregion Method Calls

#pragma region Unload DLL

void UForceTubeVRFunctions::FreeDLL() {
	if (v_dllHandle != NULL) {
		m_InitAsyncFromDll = NULL;
		m_KickFromDll = NULL;
		m_RumbleFromDll = NULL;
		m_ShotFromDll = NULL;
		m_SetActiveFromDll = NULL;
		m_TempoToKickPowerFromDll = NULL;
		FPlatformProcess::FreeDllHandle(v_dllHandle); v_dllHandle = NULL;
	}
}

#pragma endregion Unload DLL