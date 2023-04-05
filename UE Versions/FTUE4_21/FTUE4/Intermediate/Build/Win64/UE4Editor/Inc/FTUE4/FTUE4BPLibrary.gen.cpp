// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FTUE4/Public/FTUE4BPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFTUE4BPLibrary() {}
// Cross Module References
	FTUE4_API UEnum* Z_Construct_UEnum_FTUE4_ForceTubeVRChannel();
	UPackage* Z_Construct_UPackage__Script_FTUE4();
	FTUE4_API UScriptStruct* Z_Construct_UScriptStruct_FConnectedJson();
	FTUE4_API UClass* Z_Construct_UClass_UFTUE4BPLibrary_NoRegister();
	FTUE4_API UClass* Z_Construct_UClass_UFTUE4BPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FTUE4_API UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel();
	FTUE4_API UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel();
	FTUE4_API UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel();
	FTUE4_API UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync();
	FTUE4_API UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels();
	FTUE4_API UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel();
	FTUE4_API UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels();
	FTUE4_API UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube();
	FTUE4_API UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel();
	FTUE4_API UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel();
	FTUE4_API UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_SetActive();
	FTUE4_API UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel();
	FTUE4_API UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower();
	FTUE4_API UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel();
// End Cross Module References
	static UEnum* ForceTubeVRChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FTUE4_ForceTubeVRChannel, Z_Construct_UPackage__Script_FTUE4(), TEXT("ForceTubeVRChannel"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ForceTubeVRChannel(ForceTubeVRChannel_StaticEnum, TEXT("/Script/FTUE4"), TEXT("ForceTubeVRChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FTUE4_ForceTubeVRChannel_CRC() { return 3357088937U; }
	UEnum* Z_Construct_UEnum_FTUE4_ForceTubeVRChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FTUE4();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ForceTubeVRChannel"), 0, Get_Z_Construct_UEnum_FTUE4_ForceTubeVRChannel_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ForceTubeVRChannel::all", (int64)ForceTubeVRChannel::all },
				{ "ForceTubeVRChannel::rifle", (int64)ForceTubeVRChannel::rifle },
				{ "ForceTubeVRChannel::rifleButt", (int64)ForceTubeVRChannel::rifleButt },
				{ "ForceTubeVRChannel::rifleBolt", (int64)ForceTubeVRChannel::rifleBolt },
				{ "ForceTubeVRChannel::pistol1", (int64)ForceTubeVRChannel::pistol1 },
				{ "ForceTubeVRChannel::pistol2", (int64)ForceTubeVRChannel::pistol2 },
				{ "ForceTubeVRChannel::other", (int64)ForceTubeVRChannel::other },
				{ "ForceTubeVRChannel::vest", (int64)ForceTubeVRChannel::vest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FTUE4,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ForceTubeVRChannel",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ForceTubeVRChannel",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FConnectedJson::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FTUE4_API uint32 Get_Z_Construct_UScriptStruct_FConnectedJson_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConnectedJson, Z_Construct_UPackage__Script_FTUE4(), TEXT("ConnectedJson"), sizeof(FConnectedJson), Get_Z_Construct_UScriptStruct_FConnectedJson_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConnectedJson(FConnectedJson::StaticStruct, TEXT("/Script/FTUE4"), TEXT("ConnectedJson"), false, nullptr, nullptr);
static struct FScriptStruct_FTUE4_StaticRegisterNativesFConnectedJson
{
	FScriptStruct_FTUE4_StaticRegisterNativesFConnectedJson()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConnectedJson")),new UScriptStruct::TCppStructOps<FConnectedJson>);
	}
} ScriptStruct_FTUE4_StaticRegisterNativesFConnectedJson;
	struct Z_Construct_UScriptStruct_FConnectedJson_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connected_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Connected;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Connected_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectedJson_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConnectedJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConnectedJson>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectedJson_Statics::NewProp_Connected_MetaData[] = {
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConnectedJson_Statics::NewProp_Connected = { UE4CodeGen_Private::EPropertyClass::Array, "Connected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConnectedJson, Connected), METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectedJson_Statics::NewProp_Connected_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectedJson_Statics::NewProp_Connected_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConnectedJson_Statics::NewProp_Connected_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Connected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConnectedJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectedJson_Statics::NewProp_Connected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectedJson_Statics::NewProp_Connected_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConnectedJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FTUE4,
		nullptr,
		&NewStructOps,
		"ConnectedJson",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FConnectedJson),
		alignof(FConnectedJson),
		Z_Construct_UScriptStruct_FConnectedJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectedJson_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectedJson_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectedJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConnectedJson()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConnectedJson_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FTUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConnectedJson"), sizeof(FConnectedJson), Get_Z_Construct_UScriptStruct_FConnectedJson_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConnectedJson_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConnectedJson_CRC() { return 3018181070U; }
	void UFTUE4BPLibrary::StaticRegisterNativesUFTUE4BPLibrary()
	{
		UClass* Class = UFTUE4BPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToChannel", &UFTUE4BPLibrary::execAddToChannel },
			{ "ClearChannel", &UFTUE4BPLibrary::execClearChannel },
			{ "GetBatteryLevel", &UFTUE4BPLibrary::execGetBatteryLevel },
			{ "InitAsync", &UFTUE4BPLibrary::execInitAsync },
			{ "InitChannels", &UFTUE4BPLibrary::execInitChannels },
			{ "KickChannel", &UFTUE4BPLibrary::execKickChannel },
			{ "ListChannels", &UFTUE4BPLibrary::execListChannels },
			{ "ListConnectedForceTube", &UFTUE4BPLibrary::execListConnectedForceTube },
			{ "RemoveFromChannel", &UFTUE4BPLibrary::execRemoveFromChannel },
			{ "RumbleChannel", &UFTUE4BPLibrary::execRumbleChannel },
			{ "SetActive", &UFTUE4BPLibrary::execSetActive },
			{ "ShotChannel", &UFTUE4BPLibrary::execShotChannel },
			{ "TempoToKickPower", &UFTUE4BPLibrary::execTempoToKickPower },
			{ "UpdateSelectChannel", &UFTUE4BPLibrary::execUpdateSelectChannel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics
	{
		struct FTUE4BPLibrary_eventAddToChannel_Parms
		{
			int32 nChannel;
			FString sName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_nChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FTUE4BPLibrary_eventAddToChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTUE4BPLibrary_eventAddToChannel_Parms), &Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_sName = { UE4CodeGen_Private::EPropertyClass::Str, "sName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventAddToChannel_Parms, sName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_nChannel = { UE4CodeGen_Private::EPropertyClass::Int, "nChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventAddToChannel_Parms, nChannel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_sName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::NewProp_nChannel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, "AddToChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FTUE4BPLibrary_eventAddToChannel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics
	{
		struct FTUE4BPLibrary_eventClearChannel_Parms
		{
			int32 nChannel;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_nChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::NewProp_nChannel = { UE4CodeGen_Private::EPropertyClass::Int, "nChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventClearChannel_Parms, nChannel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::NewProp_nChannel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, "ClearChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FTUE4BPLibrary_eventClearChannel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics
	{
		struct FTUE4BPLibrary_eventGetBatteryLevel_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventGetBatteryLevel_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, "GetBatteryLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FTUE4BPLibrary_eventGetBatteryLevel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics
	{
		struct FTUE4BPLibrary_eventInitAsync_Parms
		{
			bool pistolsFirst;
		};
		static void NewProp_pistolsFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pistolsFirst;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::NewProp_pistolsFirst_SetBit(void* Obj)
	{
		((FTUE4BPLibrary_eventInitAsync_Parms*)Obj)->pistolsFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::NewProp_pistolsFirst = { UE4CodeGen_Private::EPropertyClass::Bool, "pistolsFirst", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTUE4BPLibrary_eventInitAsync_Parms), &Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::NewProp_pistolsFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::NewProp_pistolsFirst,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "CPP_Default_pistolsFirst", "false" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, "InitAsync", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FTUE4BPLibrary_eventInitAsync_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics
	{
		struct FTUE4BPLibrary_eventInitChannels_Parms
		{
			FString sJsonChannelList;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sJsonChannelList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FTUE4BPLibrary_eventInitChannels_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTUE4BPLibrary_eventInitChannels_Parms), &Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics::NewProp_sJsonChannelList = { UE4CodeGen_Private::EPropertyClass::Str, "sJsonChannelList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventInitChannels_Parms, sJsonChannelList), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics::NewProp_sJsonChannelList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, "InitChannels", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FTUE4BPLibrary_eventInitChannels_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics
	{
		struct FTUE4BPLibrary_eventKickChannel_Parms
		{
			uint8 power;
			ForceTubeVRChannel channel;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_channel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_channel_Underlying;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_power;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::NewProp_channel = { UE4CodeGen_Private::EPropertyClass::Enum, "channel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventKickChannel_Parms, channel), Z_Construct_UEnum_FTUE4_ForceTubeVRChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::NewProp_channel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::NewProp_power = { UE4CodeGen_Private::EPropertyClass::Byte, "power", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventKickChannel_Parms, power), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::NewProp_channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::NewProp_channel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::NewProp_power,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, "KickChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FTUE4BPLibrary_eventKickChannel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics
	{
		struct FTUE4BPLibrary_eventListChannels_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventListChannels_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, "ListChannels", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FTUE4BPLibrary_eventListChannels_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics
	{
		struct FTUE4BPLibrary_eventListConnectedForceTube_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventListConnectedForceTube_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, "ListConnectedForceTube", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FTUE4BPLibrary_eventListConnectedForceTube_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics
	{
		struct FTUE4BPLibrary_eventRemoveFromChannel_Parms
		{
			int32 nChannel;
			FString sName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_nChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FTUE4BPLibrary_eventRemoveFromChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTUE4BPLibrary_eventRemoveFromChannel_Parms), &Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_sName = { UE4CodeGen_Private::EPropertyClass::Str, "sName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventRemoveFromChannel_Parms, sName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_nChannel = { UE4CodeGen_Private::EPropertyClass::Int, "nChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventRemoveFromChannel_Parms, nChannel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_sName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::NewProp_nChannel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, "RemoveFromChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FTUE4BPLibrary_eventRemoveFromChannel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics
	{
		struct FTUE4BPLibrary_eventRumbleChannel_Parms
		{
			uint8 power;
			float timeInSeconds;
			ForceTubeVRChannel channel;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_channel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_channel_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeInSeconds;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_power;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_channel = { UE4CodeGen_Private::EPropertyClass::Enum, "channel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventRumbleChannel_Parms, channel), Z_Construct_UEnum_FTUE4_ForceTubeVRChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_channel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_timeInSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "timeInSeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventRumbleChannel_Parms, timeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_power = { UE4CodeGen_Private::EPropertyClass::Byte, "power", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventRumbleChannel_Parms, power), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_channel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_timeInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::NewProp_power,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, "RumbleChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FTUE4BPLibrary_eventRumbleChannel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics
	{
		struct FTUE4BPLibrary_eventSetActive_Parms
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
	void Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::NewProp_active_SetBit(void* Obj)
	{
		((FTUE4BPLibrary_eventSetActive_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::NewProp_active = { UE4CodeGen_Private::EPropertyClass::Bool, "active", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTUE4BPLibrary_eventSetActive_Parms), &Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, "SetActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FTUE4BPLibrary_eventSetActive_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics
	{
		struct FTUE4BPLibrary_eventShotChannel_Parms
		{
			uint8 kickPower;
			uint8 rumblePower;
			float rumbleDuration;
			ForceTubeVRChannel channel;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_channel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_channel_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rumbleDuration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rumblePower;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_kickPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_channel = { UE4CodeGen_Private::EPropertyClass::Enum, "channel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventShotChannel_Parms, channel), Z_Construct_UEnum_FTUE4_ForceTubeVRChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_channel_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_rumbleDuration = { UE4CodeGen_Private::EPropertyClass::Float, "rumbleDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventShotChannel_Parms, rumbleDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_rumblePower = { UE4CodeGen_Private::EPropertyClass::Byte, "rumblePower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventShotChannel_Parms, rumblePower), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_kickPower = { UE4CodeGen_Private::EPropertyClass::Byte, "kickPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventShotChannel_Parms, kickPower), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_channel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_rumbleDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_rumblePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::NewProp_kickPower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, "ShotChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FTUE4BPLibrary_eventShotChannel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics
	{
		struct FTUE4BPLibrary_eventTempoToKickPower_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventTempoToKickPower_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::NewProp_tempo = { UE4CodeGen_Private::EPropertyClass::Float, "tempo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventTempoToKickPower_Parms, tempo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::NewProp_tempo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, "TempoToKickPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FTUE4BPLibrary_eventTempoToKickPower_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics
	{
		struct FTUE4BPLibrary_eventUpdateSelectChannel_Parms
		{
			FString connectedForceTubes;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_connectedForceTubes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventUpdateSelectChannel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::NewProp_connectedForceTubes = { UE4CodeGen_Private::EPropertyClass::Str, "connectedForceTubes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FTUE4BPLibrary_eventUpdateSelectChannel_Parms, connectedForceTubes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::NewProp_connectedForceTubes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceTubeVR" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFTUE4BPLibrary, "UpdateSelectChannel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FTUE4BPLibrary_eventUpdateSelectChannel_Parms), Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFTUE4BPLibrary_NoRegister()
	{
		return UFTUE4BPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFTUE4BPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFTUE4BPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FTUE4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFTUE4BPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_AddToChannel, "AddToChannel" }, // 3724758967
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_ClearChannel, "ClearChannel" }, // 543129174
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_GetBatteryLevel, "GetBatteryLevel" }, // 2040693651
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_InitAsync, "InitAsync" }, // 2857140667
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_InitChannels, "InitChannels" }, // 190264930
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_KickChannel, "KickChannel" }, // 317805219
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_ListChannels, "ListChannels" }, // 689206252
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_ListConnectedForceTube, "ListConnectedForceTube" }, // 114610227
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_RemoveFromChannel, "RemoveFromChannel" }, // 1058725690
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_RumbleChannel, "RumbleChannel" }, // 652023605
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_SetActive, "SetActive" }, // 2502164149
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_ShotChannel, "ShotChannel" }, // 3548285613
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_TempoToKickPower, "TempoToKickPower" }, // 2629219595
		{ &Z_Construct_UFunction_UFTUE4BPLibrary_UpdateSelectChannel, "UpdateSelectChannel" }, // 2966622240
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFTUE4BPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FTUE4BPLibrary.h" },
		{ "ModuleRelativePath", "Public/FTUE4BPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFTUE4BPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFTUE4BPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFTUE4BPLibrary_Statics::ClassParams = {
		&UFTUE4BPLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFTUE4BPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFTUE4BPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFTUE4BPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFTUE4BPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFTUE4BPLibrary, 3975378533);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFTUE4BPLibrary(Z_Construct_UClass_UFTUE4BPLibrary, &UFTUE4BPLibrary::StaticClass, TEXT("/Script/FTUE4"), TEXT("UFTUE4BPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFTUE4BPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
