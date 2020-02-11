// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "ForceTubeVRForUE4PrivatePCH.h"
#include "ForceTubeVRFunctions.h"
#include "PlayerControllerCppExample.h"
#include "Engine.h"

#define LOCTEXT_NAMESPACE "FForceTubeVRForUE4Module"


void FForceTubeVRForUE4Module::StartupModule()
{
	if (UForceTubeVRFunctions::LoadForceTubeVR()) {
		UE_LOG(LogTemp, Log, TEXT("ForceTubeVR plugin successfully initialized"));
	} else {
		UE_LOG(LogTemp, Error, TEXT("Error during ForceTubeVR plugin initialization"));
	}
}

void FForceTubeVRForUE4Module::ShutdownModule()
{
	UForceTubeVRFunctions::Rumble(0, 0.0f, ForceTubeVRChannel::all);
	UForceTubeVRFunctions::FreeDLL();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FForceTubeVRForUE4Module, ForceTubeVRForUE4)