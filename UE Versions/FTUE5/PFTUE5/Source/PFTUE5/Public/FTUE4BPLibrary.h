// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once


#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/Paths.h"
#include "JsonObjectConverter.h"
#include "FTUE4BPLibrary.generated.h"


#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#include <android_native_app_glue.h>
#endif



UENUM(BlueprintType)
enum class ForceTubeVRChannel : uint8 { all, rifle, rifleButt, rifleBolt, pistol1, pistol2, other, vest };


USTRUCT(BlueprintType)
struct FConnectedJson
{
	GENERATED_BODY()
	
public : 
	UPROPERTY() TArray<FString> Connected;

};

UCLASS()
class PFTUE5_API UFTUE4BPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	friend class FPFTUE5Module;

public:

	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR") static void InitAsync(bool pistolsFirst = false);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR") static void SetActive(bool active);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR") static void KickChannel(uint8 power, ForceTubeVRChannel channel);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR") static void RumbleChannel(uint8 power, float timeInSeconds, ForceTubeVRChannel channel);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR") static void ShotChannel(uint8 kickPower, uint8 rumblePower, float rumbleDuration, ForceTubeVRChannel channel);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR") static uint8 TempoToKickPower(float tempo);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR") static uint8 GetBatteryLevel();
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR") static FString ListConnectedForceTube();
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR") static FString ListChannels();
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR") static bool AddToChannel(int nChannel, FString sName);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR") static bool RemoveFromChannel(int nChannel, FString sName);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR") static void ClearChannel(int nChannel);

	UFUNCTION(BlueprintCallable, category = "ForceTubeVR") static TArray<FString> UpdateSelectChannel(FString connectedForceTubes);


private:
	static bool importDLL();
	static bool LoadForceTubeVR();
	static void FreeDLL();

	template<class Signature> static bool importMethodWindows(FString procName, Signature* methodSocket);


#if PLATFORM_ANDROID
	static bool importMethodAndroid(const char* methodName, const char* methodParams, jmethodID* methodSocket);
#endif // PLATEFORM_ANDROID
};
