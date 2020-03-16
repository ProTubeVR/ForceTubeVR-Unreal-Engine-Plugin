// Fill out your copyright notice in the Description page of Project Settings.

#include "ForceTubeVRForUE4PrivatePCH.h"
#include "ForceTubeVRForUE4.h"
#include "ForceTubeVRFunctions.h"


enum class ForceTubeVRChannelInt { all, rifle, rifleButt, rifleBolt, pistol1, pistol2, other, vest };
typedef void(*_InitRifle)(); // Declare a method to store the DLL method InitRifle. 
typedef void(*_InitPistol)(); // Declare a method to store the DLL method InitPistol. 
typedef void(*_Kick)(uint8 power, ForceTubeVRChannelInt channel); // Declare a method to store the DLL method Kick. 
typedef void(*_Rumble)(uint8 power, float timeInSeconds, ForceTubeVRChannelInt channel); // Declare a method to store the DLL method Rumble. 
typedef void(*_Shot)(uint8 kickPower, uint8 rumblePower, float rumbleDuration, ForceTubeVRChannelInt channel); // Declare a method to store the DLL method Kick. 
typedef void(*_SetActiveResearch)(bool active); // Declare a method to store the DLL method SetActive. 
typedef uint8(*_TempoToKickPower)(float tempo); // Declare a method to store the DLL method TempoToKickPower.
typedef uint8(*_GetBatteryLevel)(); // Declare a method to store the DLL method GetBatteryLevel.


void* v_dllHandle;
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
	if (!importMethod<_InitRifle>("InitRifle", &m_InitAsyncRifle)) {
		return false;
	}
	if (!importMethod<_InitPistol>("InitPistol", &m_InitAsyncPistols)) {
		return false;
	}
	if (!importMethod<_Kick>("KickChannel", &m_KickFromDll)) {
		return false;
	}
	if (!importMethod<_Rumble>("RumbleChannel", &m_RumbleFromDll)) {
		return false;
	}
	if (!importMethod<_Shot>("ShotChannel", &m_ShotFromDll)) {
		return false;
	}
	if (!importMethod<_SetActiveResearch>("SetActive", &m_SetActiveFromDll)) {
		return false;
	}
	if (!importMethod<_TempoToKickPower>("TempoToKickPower", &m_TempoToKickPowerFromDll)) {
		return false;
	}
	if (!importMethod<_GetBatteryLevel>("GetBatteryLevel", &m_GetBatteryLevelFromDll)) {
		return false;
	}
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

template<class Signature> bool UForceTubeVRFunctions::importMethod(FString procName, Signature* methodSocket) {
	if (v_dllHandle != NULL) {
		*methodSocket = NULL;
		*methodSocket = (Signature)FPlatformProcess::GetDllExport(v_dllHandle, *procName);
		if (*methodSocket != NULL) {
			return true;
		}
	}
	return false;
}

#pragma endregion Load DLL

#pragma region Method Calls

void UForceTubeVRFunctions::InitAsync(bool pistolsFirst) {
	if (pistolsFirst) {
		if (m_InitAsyncPistols != NULL) {
			m_InitAsyncPistols();
		}
	} else {
		if (m_InitAsyncRifle != NULL) {
			m_InitAsyncRifle();
		}
	}	
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

void UForceTubeVRFunctions::Kick(uint8 power, ForceTubeVRChannel channel){
	if (m_KickFromDll != NULL) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, TEXT(""));
		}
		m_KickFromDll(power, ChannelToInt(channel)); // Call the DLL method with arguments corresponding to the exact signature and return type of the method. 
	}
}

void UForceTubeVRFunctions::Rumble(uint8 power, float timeInSeconds, ForceTubeVRChannel channel) {
	if (m_RumbleFromDll != NULL) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, TEXT(""));
		}
		m_RumbleFromDll(power, timeInSeconds, ChannelToInt(channel)); // Call the DLL method with arguments corresponding to the exact signature and return type of the method.
	}
}

void UForceTubeVRFunctions::Shot(uint8 kickPower, uint8 rumblePower, float rumbleDuration, ForceTubeVRChannel channel) {
	if (m_ShotFromDll != NULL) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, TEXT(""));
		}
		m_ShotFromDll(kickPower, rumblePower, rumbleDuration, ChannelToInt(channel)); // Call the DLL method with arguments corresponding to the exact signature and return type of the method.
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
	} else {
		return 0;
	}
}

#pragma endregion Method Calls

#pragma region Unload DLL

void UForceTubeVRFunctions::FreeDLL() {
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
}

#pragma endregion Unload DLL