// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ForceTubeVRChannel : uint8;
#ifdef FTUE4_FTUE4BPLibrary_generated_h
#error "FTUE4BPLibrary.generated.h already included, missing '#pragma once' in FTUE4BPLibrary.h"
#endif
#define FTUE4_FTUE4BPLibrary_generated_h

#define ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConnectedJson_Statics; \
	FTUE4_API static class UScriptStruct* StaticStruct();


#define ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSelectChannel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_connectedForceTubes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFTUE4BPLibrary::UpdateSelectChannel(Z_Param_connectedForceTubes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearChannel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_nChannel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFTUE4BPLibrary::ClearChannel(Z_Param_nChannel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromChannel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_nChannel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_sName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFTUE4BPLibrary::RemoveFromChannel(Z_Param_nChannel,Z_Param_sName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToChannel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_nChannel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_sName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFTUE4BPLibrary::AddToChannel(Z_Param_nChannel,Z_Param_sName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListChannels) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFTUE4BPLibrary::ListChannels(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListConnectedForceTube) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFTUE4BPLibrary::ListConnectedForceTube(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBatteryLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UFTUE4BPLibrary::GetBatteryLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTempoToKickPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_tempo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UFTUE4BPLibrary::TempoToKickPower(Z_Param_tempo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShotChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_kickPower); \
		P_GET_PROPERTY(UByteProperty,Z_Param_rumblePower); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rumbleDuration); \
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFTUE4BPLibrary::ShotChannel(Z_Param_kickPower,Z_Param_rumblePower,Z_Param_rumbleDuration,ForceTubeVRChannel(Z_Param_channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRumbleChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_power); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timeInSeconds); \
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFTUE4BPLibrary::RumbleChannel(Z_Param_power,Z_Param_timeInSeconds,ForceTubeVRChannel(Z_Param_channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKickChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_power); \
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFTUE4BPLibrary::KickChannel(Z_Param_power,ForceTubeVRChannel(Z_Param_channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_active); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFTUE4BPLibrary::SetActive(Z_Param_active); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitAsync) \
	{ \
		P_GET_UBOOL(Z_Param_pistolsFirst); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFTUE4BPLibrary::InitAsync(Z_Param_pistolsFirst); \
		P_NATIVE_END; \
	}


#define ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSelectChannel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_connectedForceTubes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UFTUE4BPLibrary::UpdateSelectChannel(Z_Param_connectedForceTubes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearChannel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_nChannel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFTUE4BPLibrary::ClearChannel(Z_Param_nChannel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromChannel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_nChannel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_sName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFTUE4BPLibrary::RemoveFromChannel(Z_Param_nChannel,Z_Param_sName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToChannel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_nChannel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_sName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFTUE4BPLibrary::AddToChannel(Z_Param_nChannel,Z_Param_sName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListChannels) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFTUE4BPLibrary::ListChannels(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListConnectedForceTube) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFTUE4BPLibrary::ListConnectedForceTube(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBatteryLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UFTUE4BPLibrary::GetBatteryLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTempoToKickPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_tempo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=UFTUE4BPLibrary::TempoToKickPower(Z_Param_tempo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShotChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_kickPower); \
		P_GET_PROPERTY(UByteProperty,Z_Param_rumblePower); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rumbleDuration); \
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFTUE4BPLibrary::ShotChannel(Z_Param_kickPower,Z_Param_rumblePower,Z_Param_rumbleDuration,ForceTubeVRChannel(Z_Param_channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRumbleChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_power); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timeInSeconds); \
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFTUE4BPLibrary::RumbleChannel(Z_Param_power,Z_Param_timeInSeconds,ForceTubeVRChannel(Z_Param_channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKickChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_power); \
		P_GET_ENUM(ForceTubeVRChannel,Z_Param_channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFTUE4BPLibrary::KickChannel(Z_Param_power,ForceTubeVRChannel(Z_Param_channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_active); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFTUE4BPLibrary::SetActive(Z_Param_active); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitAsync) \
	{ \
		P_GET_UBOOL(Z_Param_pistolsFirst); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFTUE4BPLibrary::InitAsync(Z_Param_pistolsFirst); \
		P_NATIVE_END; \
	}


#define ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFTUE4BPLibrary(); \
	friend struct Z_Construct_UClass_UFTUE4BPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFTUE4BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FTUE4"), NO_API) \
	DECLARE_SERIALIZER(UFTUE4BPLibrary)


#define ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUFTUE4BPLibrary(); \
	friend struct Z_Construct_UClass_UFTUE4BPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFTUE4BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FTUE4"), NO_API) \
	DECLARE_SERIALIZER(UFTUE4BPLibrary)


#define ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFTUE4BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFTUE4BPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFTUE4BPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFTUE4BPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFTUE4BPLibrary(UFTUE4BPLibrary&&); \
	NO_API UFTUE4BPLibrary(const UFTUE4BPLibrary&); \
public:


#define ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFTUE4BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFTUE4BPLibrary(UFTUE4BPLibrary&&); \
	NO_API UFTUE4BPLibrary(const UFTUE4BPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFTUE4BPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFTUE4BPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFTUE4BPLibrary)


#define ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_PRIVATE_PROPERTY_OFFSET
#define ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_33_PROLOG
#define ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_PRIVATE_PROPERTY_OFFSET \
	ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_RPC_WRAPPERS \
	ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_INCLASS \
	ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_PRIVATE_PROPERTY_OFFSET \
	ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_INCLASS_NO_PURE_DECLS \
	ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectTest_Plugins_FTUE4_Source_FTUE4_Public_FTUE4BPLibrary_h


#define FOREACH_ENUM_FORCETUBEVRCHANNEL(op) \
	op(ForceTubeVRChannel::all) \
	op(ForceTubeVRChannel::rifle) \
	op(ForceTubeVRChannel::rifleButt) \
	op(ForceTubeVRChannel::rifleBolt) \
	op(ForceTubeVRChannel::pistol1) \
	op(ForceTubeVRChannel::pistol2) \
	op(ForceTubeVRChannel::other) \
	op(ForceTubeVRChannel::vest) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
