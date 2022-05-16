// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FTUE4BPLibrary.h"
#include "FTUE4.h"
#include "Engine.h"
#include "JsonObjectConverter.h"
#include <string>


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
jmethodID JListConnectedForcetube;
jmethodID JListChannels;
jmethodID JAddToChannel;
jmethodID JRemoveFromChannel;
jmethodID JClearChannel;

#endif


void *v_dllHandle;
enum class ForceTubeVRChannelInt { all, rifle, rifleButt, rifleBolt, pistol1, pistol2, other, vest };
FConnectedJson connectedJson;
FString fName;



typedef void(*_InitRifle)();
typedef void(*_InitPistol)();
typedef void(*_Kick)(uint8 power, ForceTubeVRChannelInt channel);
typedef void(*_Rumble)(uint8 power, float rumbleDuration, ForceTubeVRChannelInt channel);
typedef void(*_Shot)(uint8 kickPower, uint8 rumblePower, uint8 rumbleDuration, ForceTubeVRChannelInt channel);
typedef uint8(*_TempoToKickPower)(float tempo);
typedef uint8(*_GetBatteryLevel)();
typedef char*(*_ListConnectedForceTube)();
typedef char*(*_ListChannels)();
typedef bool(*_AddToChannel)(int nChannel, char* sName);
typedef bool(*_RemoveFromChannel)(int nChannel, char* sName);
typedef void(*_ClearChannel)(int nChannel);
typedef void(*_SetActive)(bool nActive);

_InitRifle m_InitRifle;
_InitPistol m_InitPistol;
_Kick m_Kick;
_Rumble m_Rumble;
_Shot m_Shot;
_TempoToKickPower m_TempoToKickPower;
_GetBatteryLevel m_GetBatteryLevel;
_ListConnectedForceTube m_ListConnectedForceTube;
_ListChannels m_ListChannels;
_AddToChannel m_AddToChannel;
_RemoveFromChannel m_RemoveFromChannel;
_ClearChannel m_ClearChannel;
_SetActive m_SetActive;


#pragma region Load DLL

bool UFTUE4BPLibrary::LoadForceTubeVR()
{
	if (!importDLL())
	{
		return false;
	}
#if PLATFORM_WINDOWS
	if (!importMethodWindows<_InitRifle>("InitRifle", &m_InitRifle))
	{
		return false;
	}
	if (!importMethodWindows<_InitPistol>("InitPistol", &m_InitPistol))
	{
		return false;
	}
	if (!importMethodWindows<_Kick>("KickChannel", &m_Kick))
	{
		return false;
	}
	if (!importMethodWindows<_Rumble>("RumbleChannel", &m_Rumble))
	{
		return false;
	}
	if (!importMethodWindows<_Shot>("ShotChannel", &m_Shot))
	{
		return false;
	}
	if (!importMethodWindows<_TempoToKickPower>("TempoToKickPower", &m_TempoToKickPower))
	{
		return false;
	}
	if (!importMethodWindows<_GetBatteryLevel>("GetBatteryLevel", &m_GetBatteryLevel))
	{
		return false;
	}
	if (!importMethodWindows<_ListConnectedForceTube>("ListConnectedForceTube", &m_ListConnectedForceTube))
	{
		return false;
	}
	if (!importMethodWindows<_ListChannels>("ListChannels", &m_ListChannels))
	{
		return false;
	}
	
	if (!importMethodWindows<_AddToChannel>("AddToChannel", &m_AddToChannel))
	{
		return false;
	}
	if (!importMethodWindows<_RemoveFromChannel>("RemoveFromChannel", &m_RemoveFromChannel))
	{
		return false;
	}
	if (!importMethodWindows<_ClearChannel>("ClearChannel", &m_ClearChannel))
	{
		return false;
	}

#else
	#if PLATFORM_ANDROID
		if (!importMethodAndroid("InitAndroid", "(Landroid/app/Activity;Z)V", &JInit))
		{
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
		if (!importMethodAndroid("ListConnectedForceTube", "()Ljava/lang/String;", &JListConnectedForcetube))
		{
			return false;
		}
		if (!importMethodAndroid("ListChannels", "()Ljava/lang/String;", &JListChannels))
		{
			return false;
		}
		if (!importMethodAndroid("AddToChannel", "(IJ)Z", &JAddToChannel))
		{
			return false;
		}
		if (!importMethodAndroid("RemoveFromChannel", "(IJ)Z", &JRemoveFromChannel))
		{
			return false;
		}
		if (!importMethodAndroid("ClearChannel", "(I)V", &JClearChannel))
		{
			return false;
		}
		
	#endif // 0

#endif
	return true;

}

bool UFTUE4BPLibrary::importDLL()
{
#if PLATFORM_WINDOWS
	#ifdef _WIN64
		FString filePath = *FPaths::GameDir().Append("Plugins/FTUE4/ForceTubeVR_API_x64.dll");
	#endif
	if (FPaths::FileExists(filePath))
	{
		v_dllHandle = FPlatformProcess::GetDllHandle(*filePath);
		if (v_dllHandle != NULL)
		{
			return true;
		}
	}
	return false;
#else
	#if PLATFORM_ANDROID
		Env = FAndroidApplication::GetJavaEnv(true);
		if (Env) {
			__android_log_print(ANDROID_LOG_VERBOSE, "JNI", "Found java environment");
			return true;
		}
		else {
			__android_log_print(ANDROID_LOG_VERBOSE, "JNI", "No java environment");
			return false;
		}
	#endif
#endif

}

template<class Signature> bool UFTUE4BPLibrary::importMethodWindows(FString methodName, Signature* methodSocket)
{
	if (v_dllHandle != NULL)
	{
		*methodSocket = NULL;
		*methodSocket = (Signature)FPlatformProcess::GetDllExport(v_dllHandle, *methodName);
		if (*methodSocket != NULL)
		{
			return true;
		}
	}
	return false;
}


#if PLATFORM_ANDROID

bool UFTUE4BPLibrary::importMethodAndroid(const char* methodName, const char* methodParams, jmethodID* methodSocket) {
	if (Env) {
		__android_log_print(ANDROID_LOG_VERBOSE, "JNI", "---------------------------------ENV FOUND -----------------------------------------------------------");
		*methodSocket = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, methodName, methodParams, false);
		if (!methodSocket) {
			return false;
		}
		else {
			return true;
		}
	}
	else {
		return false;
	}
}

#endif


#pragma endregion

#pragma region Method Calls

void UFTUE4BPLibrary::InitAsync(bool pistolsFirst)
{
#if PLATFORM_WINDOWS

	if (pistolsFirst)
	{
		if (m_InitPistol != NULL)
		{
			m_InitPistol();
		}
	}
	else
	{
		if (m_InitRifle != NULL)
		{
			m_InitRifle();
		}
	}
#else
	#if PLATFORM_ANDROID
	if (JInit != NULL) {
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JInit, FJavaWrapper::GameActivityThis, pistolsFirst);
	}
	#endif
#endif 
}

void UFTUE4BPLibrary::SetActive(bool active)
{
#if PLATFORM_WINDOWS
	if (m_SetActive != NULL)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Set Active"));
		}
		m_SetActive(active);
	}
#else
	#if PLATFORM_ANDROID

	#endif
#endif // PLATFORM_WINDOWS
}

ForceTubeVRChannelInt ChannelToInt(ForceTubeVRChannel channel)
{
	switch (channel)
	{
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

void UFTUE4BPLibrary::KickChannel(uint8 power, ForceTubeVRChannel channel)
{
#if PLATFORM_WINDOWS
	if (m_Kick != NULL)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Kick"));
		}
		m_Kick(power, ChannelToInt(channel));
	}
	#else
		#if PLATFORM_ANDROID
			if (JKick != NULL) {
			FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JKick, (int8) power, (int) channel);
		}
		#endif
#endif
}

void UFTUE4BPLibrary::RumbleChannel(uint8 power,const float timeInSeconds, ForceTubeVRChannel channel)
{
	#if PLATFORM_WINDOWS
		if (m_Rumble != NULL)
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Rumble"));
			}
			m_Rumble(power, timeInSeconds, ChannelToInt(channel));
		}
	#else
		#if PLATFORM_ANDROID
			if (JRumble != NULL) {
				FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JRumble, (int8) power, timeInSeconds, (int) channel);
			}
		#endif
	#endif // PLATFORM_WINDOWS
}

void UFTUE4BPLibrary::ShotChannel(uint8 kickPower, uint8 rumblePower, float rumbleDuration, ForceTubeVRChannel channel)
{
	#if PLATFORM_WINDOWS
		if (m_Shot != NULL)
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Shot"));
			}
			m_Shot(kickPower, rumblePower, rumbleDuration, ChannelToInt(channel));
		}
	#else
		#if PLATFORM_ANDROID
			if (JShoot != NULL) {
				FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JShoot, (int8)kickPower, (int8)rumblePower, rumbleDuration, (int)channel);
			}
		#endif
	#endif // PLATFORM_WINDOWS
}

uint8 UFTUE4BPLibrary::TempoToKickPower(float tempo)
{
#if PLATFORM_WINDOWS
	if (m_TempoToKickPower != NULL)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("TempoToKickPower"));
		}
		return m_TempoToKickPower(tempo);
	}
	else
	{
		return 0;
	}
#else
	#if PLATFORM_ANDROID
		if (JTempoToKickPower != NULL) {
			return FJavaWrapper::CallIntMethod(Env, FJavaWrapper::GameActivityThis, JTempoToKickPower, tempo);
		}
		else {
			return 0;
		}
	#endif
#endif // PLATFORM_WINDOWS
}

uint8 UFTUE4BPLibrary::GetBatteryLevel()
{
#if PLATFORM_WINDOWS
	if (m_GetBatteryLevel != NULL)
	{
		return m_GetBatteryLevel();
	}
	else
	{
		return 0;
	}
#else
	#if PLATFORM_ANDROID
		return 0;
	#endif
#endif // PLATFORM_WINDOWS
}

FString UFTUE4BPLibrary::ListConnectedForceTube()
{
#if PLATFORM_WINDOWS
	if (m_ListConnectedForceTube != NULL)
	{
		return m_ListConnectedForceTube();
	}
	else
	{
		return "";
	}
#else
#if PLATFORM_ANDROID
	if (JListConnectedForcetube != NULL)
	{
		jstring jstr = (jstring) FJavaWrapper::CallObjectMethod(Env, FJavaWrapper::GameActivityThis, JListConnectedForcetube);
		const char *str = Env->GetStringUTFChars(jstr, 0);
		FString sUE4Str = FString(UTF8_TO_TCHAR(str));
		Env->ReleaseStringUTFChars(jstr, str);
		return sUE4Str;

	}
	else
	{
		return "";
	}
	#endif
#endif // PLATFORM_WINDOWS
}

FString UFTUE4BPLibrary::ListChannels()
{
#if PLATFORM_WINDOWS
	if (m_ListChannels != NULL)
	{
		return m_ListChannels();
	}
	else
	{
		return "";
	}
#else
	#if PLATFORM_ANDROID
	if (JListChannels != NULL)
	{
		jstring jstr = (jstring)FJavaWrapper::CallObjectMethod(Env, FJavaWrapper::GameActivityThis, JListChannels);
		const char *str = Env->GetStringUTFChars(jstr, 0);
		FString sUE4Str = FString(UTF8_TO_TCHAR(str));
		Env->ReleaseStringUTFChars(jstr, str);
		return sUE4Str;

	}
	else
	{
		return "JListChannels null";
	}
	#endif
#endif // PLATFORM_WINDOWS
}


bool UFTUE4BPLibrary::AddToChannel(int nChannel, FString sName)

{
#if PLATFORM_WINDOWS
	if (m_AddToChannel != NULL)
	{
		return m_AddToChannel(nChannel, TCHAR_TO_ANSI(*sName));
	}
	else
	{
		return false;
	}
#else
	#if PLATFORM_ANDROID

	if (JAddToChannel != NULL)
	{		
		sName = sName.Replace(TEXT("ForceTubeVR "), TEXT(""));
		jlong nName = FCString::Atoi(*sName);

		bool ret = Env->CallBooleanMethod(FJavaWrapper::GameActivityThis, JAddToChannel, nChannel, nName);
		return ret;
}
	else {
		return false;
	}
#endif
#endif // PLATFORM_WINDOWS
}

bool UFTUE4BPLibrary::RemoveFromChannel(int nChannel, FString sName)
{
#if PLATFORM_WINDOWS
	if (m_RemoveFromChannel != NULL)
	{
	
		return m_RemoveFromChannel(nChannel, TCHAR_TO_ANSI(*sName));

	
	}
	else
	{
		return false;
	}
#else
	#if PLATFORM_ANDROID
	if (JRemoveFromChannel != NULL)
	{
		sName = sName.Replace(TEXT("ForceTubeVR "), TEXT(""));
		jlong nName = FCString::Atoi(*sName);

		bool ret = Env->CallBooleanMethod(FJavaWrapper::GameActivityThis, JRemoveFromChannel, nChannel, nName);
		return ret;
}
	else {
		return false;
	}
	#endif
#endif // PLATFORM_WINDOWS
}

void UFTUE4BPLibrary::ClearChannel(int nChannel)
{
#if PLATFORM_WINDOWS
	if (m_ClearChannel != NULL)
	{
		m_ClearChannel(nChannel);
	}
#else
	#if PLATFORM_ANDROID
	if (JClearChannel != NULL)
	{
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, JClearChannel, nChannel);
	}
	#endif
#endif // PLATFORM_WINDOWS

}

TArray<FString> UFTUE4BPLibrary::UpdateSelectChannel(FString connectedForceTubes)
{
	//UFTUE4BPLibrary library;
	FJsonObjectConverter::JsonObjectStringToUStruct(connectedForceTubes, &connectedJson, 0, 0);

	for (uint8 i = 0; i < connectedJson.Connected.Num(); i++)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, connectedJson.Connected[i]);
	}
	return connectedJson.Connected;

}
#pragma endregion Method Calls

#pragma region Unload DLL

void UFTUE4BPLibrary::FreeDLL()
{
#if PLATFORM_WINDOWS
	if (v_dllHandle != NULL)
	{
		m_InitRifle = NULL;
		m_InitPistol = NULL;
		m_Kick = NULL;
		m_Rumble = NULL;
		m_Shot = NULL;
		m_TempoToKickPower = NULL;
		m_GetBatteryLevel = NULL;
		m_ListConnectedForceTube = NULL;
		m_ListChannels = NULL;
		m_AddToChannel = NULL;
		m_RemoveFromChannel = NULL;
		m_ClearChannel = NULL;
		m_SetActive = NULL;
		FPlatformProcess::FreeDllHandle(v_dllHandle);
		v_dllHandle = NULL;
	}
#endif
}

#pragma endregion Unload DLL