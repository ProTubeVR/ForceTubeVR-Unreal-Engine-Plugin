// Copyright Epic Games, Inc. All Rights Reserved.

#include "PFTUE5.h"
#include "FTUE4BPLibrary.h"

#define LOCTEXT_NAMESPACE "FPFTUE5Module"

void FPFTUE5Module::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
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

void FPFTUE5Module::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	UFTUE4BPLibrary::FreeDLL();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPFTUE5Module, PFTUE5)