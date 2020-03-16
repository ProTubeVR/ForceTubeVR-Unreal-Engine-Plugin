// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ForceTubeVRFunctions.generated.h"

#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#endif


UENUM(BlueprintType)
enum class ForceTubeVRChannel { all, rifle, rifleButt, rifleBolt, pistol1, pistol2, other, vest };


/**
 * 
 */
UCLASS()
class FORCETUBEVRFORUE4_API UForceTubeVRFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


friend class FForceTubeVRForUE4Module;

public:

	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR", meta = (ToolTip = "True = load the two first ForceTubeVRs found in the rifle butt and rifle bolt channels, false = load the two first ForceTubeVRs found in the pistol1 and pistol2 channels")) static void InitAsync(bool pistolsFirst = false);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR", meta = (ToolTip = "0 = no power, 255 = max power, this function is linear")) static void Kick(uint8 power, ForceTubeVRChannel channel = ForceTubeVRChannel::rifle);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR", meta = (ToolTip = "For power : 0 = no power, 255 = max power, if power <= 126, only the little motor is activated, this function is linear ; for timeInSeconds : 0.0f seconds is a special command that make the ForceTubeVR never stop the rumble")) static void Rumble(uint8 power, float timeInSeconds, ForceTubeVRChannel channel = ForceTubeVRChannel::rifle);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR", meta = (ToolTip = "Combination of kick and rumble methods ; rumble duration still be in seconds and still don't stop if you set this parameter at 0.0f")) static void Shot(uint8 kickPower, uint8 rumblePower, float rumbleDuration, ForceTubeVRChannel channel = ForceTubeVRChannel::rifle);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR", meta = (ToolTip = "It is true by default, set it to false prevent the DLL to make a thread regularly check for disconnections and reconnect the ForceTubeVR if needed")) static void SetActiveResearch(bool active);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR", meta = (ToolTip = "Take duration in seconds between two shots (for auto-shots) and give you the maximal kick power you can use without any loss (in high shot frequencies, you will have some loss of kick if kick power is too big)")) static uint8 TempoToKickPower(float tempo);
	UFUNCTION(BlueprintCallable, Category = "ForceTubeVR", meta = (ToolTip = "Get the battery value of a connected ForceTubeVR (only get the first if it is more than one connected)")) static uint8 GetBatteryLevel();

private:

	static bool importDLL();
	template<class Signature> static bool importMethod(FString procName, Signature* methodSocket);
	static bool LoadForceTubeVR();
	static void FreeDLL();
};
