// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ForceTubeVRFunctions.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Core/Public/Async/Async.h"
#include "Engine.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerCppExample.generated.h"

/**
 * 
 */
UCLASS()
class FORCETUBEVRFORUE4_API APlayerControllerCppExample : public APlayerController
{
	GENERATED_BODY()
		
public:

	void BeginPlay();
	void Tick(float DeltaTime); //called each tick by UE4

private:

	static bool autoShooting;
	bool activeResearch = true;
	float lastKickKey = 0.0f, lastRumbleKey = 0.0f, lastShotKey = 0.0f, lastUpdateActiveResearchKey = 0.0f, lastAutoShotKey = 0.0f, lastBluetoothSettingsKey = 0.0f;


	void updateKick();
	void updateRumble();
	void updateShoot();
	void updateActiveResearch();
	void updateBluetoothSettings();
};
