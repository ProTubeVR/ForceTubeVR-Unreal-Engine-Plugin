// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ForceTubeVRForUE4/Public/ForceTubeVRFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceTubeVRFunctions() {}
// Cross Module References
	FORCETUBEVRFORUE4_API UClass* Z_Construct_UClass_UForceTubeVRFunctions_NoRegister();
	FORCETUBEVRFORUE4_API UClass* Z_Construct_UClass_UForceTubeVRFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ForceTubeVRForUE4();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Kick();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Rumble();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Shot();
	FORCETUBEVRFORUE4_API UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower();
// End Cross Module References
	void UForceTubeVRFunctions::StaticRegisterNativesUForceTubeVRFunctions()
	{
		UClass* Class = UForceTubeVRFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBatteryLevel", &UForceTubeVRFunctions::execGetBatteryLevel },
			{ "Kick", &UForceTubeVRFunctions::execKick },
			{ "OpenAndroidBluetoothSettings", &UForceTubeVRFunctions::execOpenAndroidBluetoothSettings },
			{ "Rumble", &UForceTubeVRFunctions::execRumble },
			{ "SetActiveResearch", &UForceTubeVRFunctions::execSetActiveResearch },
			{ "Shot", &UForceTubeVRFunctions::execShot },
			{ "TempoToKickPower", &UForceTubeVRFunctions::execTempoToKickPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics
	{
		struct ForceTubeVRFunctions_eventGetBatteryLevel_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceTubeVRFunctions_eventGetBatteryLevel_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, nullptr, "GetBatteryLevel", sizeof(ForceTubeVRFunctions_eventGetBatteryLevel_Parms), Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics
	{
		struct ForceTubeVRFunctions_eventKick_Parms
		{
			uint8 power;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_power;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::NewProp_power = { "power", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceTubeVRFunctions_eventKick_Parms, power), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::NewProp_power,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "0 = no power, 255 = max power, this function is linear" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, nullptr, "Kick", sizeof(ForceTubeVRFunctions_eventKick_Parms), Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Kick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_Kick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics
	{
		struct ForceTubeVRFunctions_eventOpenAndroidBluetoothSettings_Parms
		{
			bool isInVR;
		};
		static void NewProp_isInVR_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInVR;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::NewProp_isInVR_SetBit(void* Obj)
	{
		((ForceTubeVRFunctions_eventOpenAndroidBluetoothSettings_Parms*)Obj)->isInVR = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::NewProp_isInVR = { "isInVR", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ForceTubeVRFunctions_eventOpenAndroidBluetoothSettings_Parms), &Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::NewProp_isInVR_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::NewProp_isInVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, nullptr, "OpenAndroidBluetoothSettings", sizeof(ForceTubeVRFunctions_eventOpenAndroidBluetoothSettings_Parms), Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics
	{
		struct ForceTubeVRFunctions_eventRumble_Parms
		{
			uint8 power;
			float timeInSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeInSeconds;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_power;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::NewProp_timeInSeconds = { "timeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceTubeVRFunctions_eventRumble_Parms, timeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::NewProp_power = { "power", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceTubeVRFunctions_eventRumble_Parms, power), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::NewProp_timeInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::NewProp_power,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "For power : 0 = no power, 255 = max power, if power <= 126, only the little motor is activated, this function is linear ; for timeInSeconds : 0.0f seconds is a special command that make the ForceTubeVR never stop the rumble" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, nullptr, "Rumble", sizeof(ForceTubeVRFunctions_eventRumble_Parms), Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Rumble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_Rumble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics
	{
		struct ForceTubeVRFunctions_eventSetActiveResearch_Parms
		{
			bool active;
		};
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::NewProp_active_SetBit(void* Obj)
	{
		((ForceTubeVRFunctions_eventSetActiveResearch_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ForceTubeVRFunctions_eventSetActiveResearch_Parms), &Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "It is true by default, set it to false prevent the DLL to make a thread regularly check for disconnections and reconnect the ForceTubeVR if needed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, nullptr, "SetActiveResearch", sizeof(ForceTubeVRFunctions_eventSetActiveResearch_Parms), Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics
	{
		struct ForceTubeVRFunctions_eventShot_Parms
		{
			uint8 kickPower;
			uint8 rumblePower;
			float rumbleDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rumbleDuration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rumblePower;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_kickPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_rumbleDuration = { "rumbleDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceTubeVRFunctions_eventShot_Parms, rumbleDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_rumblePower = { "rumblePower", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceTubeVRFunctions_eventShot_Parms, rumblePower), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_kickPower = { "kickPower", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceTubeVRFunctions_eventShot_Parms, kickPower), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_rumbleDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_rumblePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::NewProp_kickPower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "Combination of kick and rumble methods ; rumble duration still be in seconds and still don't stop if you set this parameter at 0.0f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, nullptr, "Shot", sizeof(ForceTubeVRFunctions_eventShot_Parms), Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_Shot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_Shot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics
	{
		struct ForceTubeVRFunctions_eventTempoToKickPower_Parms
		{
			float tempo;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tempo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceTubeVRFunctions_eventTempoToKickPower_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::NewProp_tempo = { "tempo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceTubeVRFunctions_eventTempoToKickPower_Parms, tempo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::NewProp_tempo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
		{ "ToolTip", "Take duration in seconds between two shots (for auto-shots) and give you the maximal kick power you can use without any loss (in high shot frequencies, you will have some loss of kick if kick power is too big)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceTubeVRFunctions, nullptr, "TempoToKickPower", sizeof(ForceTubeVRFunctions_eventTempoToKickPower_Parms), Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UForceTubeVRFunctions_NoRegister()
	{
		return UForceTubeVRFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UForceTubeVRFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceTubeVRFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ForceTubeVRForUE4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UForceTubeVRFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_GetBatteryLevel, "GetBatteryLevel" }, // 4026441658
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_Kick, "Kick" }, // 3362703267
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_OpenAndroidBluetoothSettings, "OpenAndroidBluetoothSettings" }, // 147466008
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_Rumble, "Rumble" }, // 2820731069
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_SetActiveResearch, "SetActiveResearch" }, // 4287469174
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_Shot, "Shot" }, // 816424589
		{ &Z_Construct_UFunction_UForceTubeVRFunctions_TempoToKickPower, "TempoToKickPower" }, // 4113549838
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceTubeVRFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ForceTubeVRFunctions.h" },
		{ "ModuleRelativePath", "Public/ForceTubeVRFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceTubeVRFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceTubeVRFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UForceTubeVRFunctions_Statics::ClassParams = {
		&UForceTubeVRFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UForceTubeVRFunctions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UForceTubeVRFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceTubeVRFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UForceTubeVRFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UForceTubeVRFunctions, 959595978);
	template<> FORCETUBEVRFORUE4_API UClass* StaticClass<UForceTubeVRFunctions>()
	{
		return UForceTubeVRFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceTubeVRFunctions(Z_Construct_UClass_UForceTubeVRFunctions, &UForceTubeVRFunctions::StaticClass, TEXT("/Script/ForceTubeVRForUE4"), TEXT("UForceTubeVRFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceTubeVRFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif