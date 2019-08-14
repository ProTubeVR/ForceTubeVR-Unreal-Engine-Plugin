// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ForceTubeVRFunctions.generated.h"

#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#endif


/**
 * 
 */
UCLASS()
class FORCETUBEVRFORUE4_API UForceTubeVRFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


friend class FForceTubeVRForUE4Module;

public:

	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR", meta = (ToolTip = "0 = no power, 255 = max power, this function is linear")) static void Kick(uint8 power);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR", meta = (ToolTip = "For power : 0 = no power, 255 = max power, if power <= 126, only the little motor is activated, this function is linear ; for timeInSeconds : 0.0f seconds is a special command that make the ForceTubeVR never stop the rumble")) static void Rumble(uint8 power, float timeInSeconds);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR", meta = (ToolTip = "Combination of kick and rumble methods ; rumble duration still be in seconds and still don't stop if you set this parameter at 0.0f")) static void Shot(uint8 kickPower, uint8 rumblePower, float rumbleDuration);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR", meta = (ToolTip = "It is true by default, set it to false prevent the DLL to make a thread regularly check for disconnections and reconnect the ForceTubeVR if needed")) static void SetActiveResearch(bool active);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR", meta = (ToolTip = "Take duration in seconds between two shots (for auto-shots) and give you the maximal kick power you can use without any loss (in high shot frequencies, you will have some loss of kick if kick power is too big)")) static uint8 TempoToKickPower(float tempo);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR", meta = (ToolTip = "")) static uint8 GetBatteryLevel();

private:

	static bool importDLL();
	static bool importMethodKick();
	static bool importMethodRumble();
	static bool importMethodShot();
	static bool importMethodSetActive();
	static bool importMethodInitAsync();
	static bool importMethodTempoToKickPower();
	static bool importMethodGetBatteryLevel();
	static bool importMethodOpenAndroidBluetoothSettings();
	static void InitAsync();
	static bool LoadForceTubeVR();
	static void FreeDLL();
};
