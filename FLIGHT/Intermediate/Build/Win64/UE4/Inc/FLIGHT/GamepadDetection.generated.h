// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLIGHT_GamepadDetection_generated_h
#error "GamepadDetection.generated.h already included, missing '#pragma once' in GamepadDetection.h"
#endif
#define FLIGHT_GamepadDetection_generated_h

#define FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsGamePadConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGamepadDetection::IsGamePadConnected(); \
		P_NATIVE_END; \
	}


#define FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsGamePadConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGamepadDetection::IsGamePadConnected(); \
		P_NATIVE_END; \
	}


#define FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGamepadDetection(); \
	friend struct Z_Construct_UClass_UGamepadDetection_Statics; \
public: \
	DECLARE_CLASS(UGamepadDetection, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FLIGHT"), NO_API) \
	DECLARE_SERIALIZER(UGamepadDetection)


#define FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGamepadDetection(); \
	friend struct Z_Construct_UClass_UGamepadDetection_Statics; \
public: \
	DECLARE_CLASS(UGamepadDetection, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FLIGHT"), NO_API) \
	DECLARE_SERIALIZER(UGamepadDetection)


#define FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGamepadDetection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGamepadDetection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGamepadDetection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGamepadDetection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGamepadDetection(UGamepadDetection&&); \
	NO_API UGamepadDetection(const UGamepadDetection&); \
public:


#define FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGamepadDetection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGamepadDetection(UGamepadDetection&&); \
	NO_API UGamepadDetection(const UGamepadDetection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGamepadDetection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGamepadDetection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGamepadDetection)


#define FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_PRIVATE_PROPERTY_OFFSET
#define FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_12_PROLOG
#define FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_PRIVATE_PROPERTY_OFFSET \
	FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_RPC_WRAPPERS \
	FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_INCLASS \
	FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_PRIVATE_PROPERTY_OFFSET \
	FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_INCLASS_NO_PURE_DECLS \
	FLIGHT_Source_FLIGHT_Public_GamepadDetection_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLIGHT_API UClass* StaticClass<class UGamepadDetection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FLIGHT_Source_FLIGHT_Public_GamepadDetection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
