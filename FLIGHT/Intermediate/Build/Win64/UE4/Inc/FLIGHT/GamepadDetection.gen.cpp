// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FLIGHT/Public/GamepadDetection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamepadDetection() {}
// Cross Module References
	FLIGHT_API UClass* Z_Construct_UClass_UGamepadDetection_NoRegister();
	FLIGHT_API UClass* Z_Construct_UClass_UGamepadDetection();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FLIGHT();
	FLIGHT_API UFunction* Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected();
// End Cross Module References
	void UGamepadDetection::StaticRegisterNativesUGamepadDetection()
	{
		UClass* Class = UGamepadDetection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsGamePadConnected", &UGamepadDetection::execIsGamePadConnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected_Statics
	{
		struct GamepadDetection_eventIsGamePadConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GamepadDetection_eventIsGamePadConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GamepadDetection_eventIsGamePadConnected_Parms), &Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "System Information" },
		{ "DisplayName", "GamepadConnected" },
		{ "ModuleRelativePath", "Public/GamepadDetection.h" },
		{ "ToolTip", "Check if gamepad connected at runtime" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamepadDetection, nullptr, "IsGamePadConnected", sizeof(GamepadDetection_eventIsGamePadConnected_Parms), Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGamepadDetection_NoRegister()
	{
		return UGamepadDetection::StaticClass();
	}
	struct Z_Construct_UClass_UGamepadDetection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGamepadDetection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FLIGHT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGamepadDetection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected, "IsGamePadConnected" }, // 841993069
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamepadDetection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GamepadDetection.h" },
		{ "ModuleRelativePath", "Public/GamepadDetection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGamepadDetection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGamepadDetection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGamepadDetection_Statics::ClassParams = {
		&UGamepadDetection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGamepadDetection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGamepadDetection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGamepadDetection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGamepadDetection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGamepadDetection, 533548425);
	template<> FLIGHT_API UClass* StaticClass<UGamepadDetection>()
	{
		return UGamepadDetection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGamepadDetection(Z_Construct_UClass_UGamepadDetection, &UGamepadDetection::StaticClass, TEXT("/Script/FLIGHT"), TEXT("UGamepadDetection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGamepadDetection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
