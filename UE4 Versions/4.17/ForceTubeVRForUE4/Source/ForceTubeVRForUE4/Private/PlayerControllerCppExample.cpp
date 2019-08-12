// Fill out your copyright notice in the Description page of Project Settings.

#include "ForceTubeVRForUE4PrivatePCH.h"
#include "ForceTubeVRForUE4.h"
#include "PlayerControllerCppExample.h"


bool APlayerControllerCppExample::autoShooting = false;


void APlayerControllerCppExample::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//check player inputs update
	if (GEngine && PlayerInput)
	{
		updateKick();
		updateRumble();
		updateShoot();
		updateActiveResearch();
		updateAutoShot();
	}
}

void APlayerControllerCppExample::updateKick() {
	//on K key down (one time per pressure) : 
	if (PlayerInput->GetKeyValue(EKeys::K) && !lastKickKey) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Kick."));
		}
		UForceTubeVRFunctions::Kick(255); // 0 = no power, 255 = max power, this function is linear
	}
	lastKickKey = PlayerInput->GetKeyValue(EKeys::K);
}

void APlayerControllerCppExample::updateRumble() {
	//on R key down (one time per pressure) : 
	if (PlayerInput->GetKeyValue(EKeys::R) && !lastRumbleKey) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Rumble."));
		}
		UForceTubeVRFunctions::Rumble(255, 0.500f); // for power : 0 = no power, 255 = max power, this function is linear, if power <= 126, only the little motor is activated ; for timeInSeconds : 0.0f seconds is a special command that make the ForceTubeVR never stop the rumble
	}
	lastRumbleKey = PlayerInput->GetKeyValue(EKeys::R);
}

void APlayerControllerCppExample::updateShoot() {
	//on S key down (one time per pressure) : 
	if (PlayerInput->GetKeyValue(EKeys::S) && !lastShotKey) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Shot : Kick + Rumble."));
		}
		UForceTubeVRFunctions::Shot(255, 255, 0.250f); // combination of kick and rumble methods ; rumble duration still be in seconds and still don't stop if you set this parameter at 0.0f
	}
	lastShotKey = PlayerInput->GetKeyValue(EKeys::S);
}

void APlayerControllerCppExample::updateActiveResearch() {
	//on U key down (one time per pressure) : 
	if (PlayerInput->GetKeyValue(EKeys::U) && !lastUpdateActiveResearchKey) {
		activeResearch = !activeResearch;
		if (GEngine)
		{
			if (activeResearch) {
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Auto reseach of ForceTubeVR enabled."));
			}
			else {
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Orange, TEXT("Auto reseach of ForceTubeVR disabled."));
			}
		}
		UForceTubeVRFunctions::SetActiveResearch(activeResearch); // true make the lib check all the some seconds for a ForceTubeVR (re)connection if it isn't paired (if it is ever paired, it changes nothing)
	}
	lastUpdateActiveResearchKey = PlayerInput->GetKeyValue(EKeys::U);
}

void APlayerControllerCppExample::updateAutoShot() {
	//on A down (one time per pressure) : 
	if (PlayerInput->GetKeyValue(EKeys::A) && !lastAutoShotKey) {
		APlayerControllerCppExample::autoShooting = !APlayerControllerCppExample::autoShooting;
		if (APlayerControllerCppExample::autoShooting) {
			if (GEngine) {
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Autoshot enabled."));
			}
			//launch a new thread
			AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [=]()
			{
				// thread task : shot and wait in a loop until autoshooting become false
				while (APlayerControllerCppExample::autoShooting) {
					UForceTubeVRFunctions::Shot(255, 255, 0.100f);
					FPlatformProcess::Sleep(0.130f);
				}
				if (GEngine) {
					GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Orange, TEXT("Autoshot disabled."));
				}
			});
		}
	}
	lastAutoShotKey = PlayerInput->GetKeyValue(EKeys::A);
}

void APlayerControllerCppExample::EndPlay(const EEndPlayReason::Type EndPlayReason) {
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Orange, TEXT("End play : end any Rumble or AutoShot thread."));
	}
	APlayerControllerCppExample::autoShooting = false;
	//stop any rumble to avoid ForceTubeVR to rumble without end (if the quit occured before all rumble requests had time to stop)
	UForceTubeVRFunctions::Rumble(0, 0.0f);
}



