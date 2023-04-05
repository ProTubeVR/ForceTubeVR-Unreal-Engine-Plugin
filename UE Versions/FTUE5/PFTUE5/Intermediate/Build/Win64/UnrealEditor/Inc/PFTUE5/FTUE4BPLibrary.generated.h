// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ForceTubeVRChannel : uint8;
#ifdef PFTUE5_FTUE4BPLibrary_generated_h
#error "FTUE4BPLibrary.generated.h already included, missing '#pragma once' in FTUE4BPLibrary.h"
#endif
#define PFTUE5_FTUE4BPLibrary_generated_h

#define FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConnectedJson_Statics; \
	PFTUE5_API static class UScriptStruct* StaticStruct();


template<> PFTUE5_API UScriptStruct* StaticStruct<struct FConnectedJson>();

#define FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_SPARSE_DATA
#define FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSelectChannel); \
	DECLARE_FUNCTION(execClearChannel); \
	DECLARE_FUNCTION(execRemoveFromChannel); \
	DECLARE_FUNCTION(execAddToChannel); \
	DECLARE_FUNCTION(execListChannels); \
	DECLARE_FUNCTION(execListConnectedForceTube); \
	DECLARE_FUNCTION(execGetBatteryLevel); \
	DECLARE_FUNCTION(execTempoToKickPower); \
	DECLARE_FUNCTION(execShotChannel); \
	DECLARE_FUNCTION(execRumbleChannel); \
	DECLARE_FUNCTION(execKickChannel); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execInitAsync);


#define FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSelectChannel); \
	DECLARE_FUNCTION(execClearChannel); \
	DECLARE_FUNCTION(execRemoveFromChannel); \
	DECLARE_FUNCTION(execAddToChannel); \
	DECLARE_FUNCTION(execListChannels); \
	DECLARE_FUNCTION(execListConnectedForceTube); \
	DECLARE_FUNCTION(execGetBatteryLevel); \
	DECLARE_FUNCTION(execTempoToKickPower); \
	DECLARE_FUNCTION(execShotChannel); \
	DECLARE_FUNCTION(execRumbleChannel); \
	DECLARE_FUNCTION(execKickChannel); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execInitAsync);


#define FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFTUE4BPLibrary(); \
	friend struct Z_Construct_UClass_UFTUE4BPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFTUE4BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PFTUE5"), NO_API) \
	DECLARE_SERIALIZER(UFTUE4BPLibrary)


#define FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUFTUE4BPLibrary(); \
	friend struct Z_Construct_UClass_UFTUE4BPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFTUE4BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PFTUE5"), NO_API) \
	DECLARE_SERIALIZER(UFTUE4BPLibrary)


#define FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_STANDARD_CONSTRUCTORS \
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


#define FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_ENHANCED_CONSTRUCTORS \
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


#define FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_34_PROLOG
#define FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_SPARSE_DATA \
	FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_RPC_WRAPPERS \
	FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_INCLASS \
	FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_SPARSE_DATA \
	FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_INCLASS_NO_PURE_DECLS \
	FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PFTUE5_API UClass* StaticClass<class UFTUE4BPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FTUE5_Plugins_PFTUE5_Source_PFTUE5_Public_FTUE4BPLibrary_h


#define FOREACH_ENUM_FORCETUBEVRCHANNEL(op) \
	op(ForceTubeVRChannel::all) \
	op(ForceTubeVRChannel::rifle) \
	op(ForceTubeVRChannel::rifleButt) \
	op(ForceTubeVRChannel::rifleBolt) \
	op(ForceTubeVRChannel::pistol1) \
	op(ForceTubeVRChannel::pistol2) \
	op(ForceTubeVRChannel::other) \
	op(ForceTubeVRChannel::vest) 

enum class ForceTubeVRChannel : uint8;
template<> PFTUE5_API UEnum* StaticEnum<ForceTubeVRChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
