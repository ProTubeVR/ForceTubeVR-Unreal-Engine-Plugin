// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FTUE4.h"
#include "FTUE4BPLibrary.h"

#define LOCTEXT_NAMESPACE "FFTUE4Module"

void FFTUE4Module::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	if (UFTUE4BPLibrary::LoadForceTubeVR())
	{
		UE_LOG(LogTemp, Log, TEXT("ForceTubeVR plugin successfully initialized"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Error during ForceTubeVR plugin initialization"));
	}
}

void FFTUE4Module::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	UFTUE4BPLibrary::FreeDLL();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFTUE4Module, FTUE4)