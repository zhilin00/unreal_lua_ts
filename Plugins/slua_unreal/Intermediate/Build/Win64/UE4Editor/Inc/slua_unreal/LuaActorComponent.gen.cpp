// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_unreal/Public/LuaActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaActorComponent() {}
// Cross Module References
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaActorComponent_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FLuaNetSerialization();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverriderInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULuaActorComponent::execUnRegistLuaTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnRegistLuaTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaActorComponent::execRegistLuaTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegistLuaTick(Z_Param_TickInterval);
		P_NATIVE_END;
	}
	void ULuaActorComponent::StaticRegisterNativesULuaActorComponent()
	{
		UClass* Class = ULuaActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegistLuaTick", &ULuaActorComponent::execRegistLuaTick },
			{ "UnRegistLuaTick", &ULuaActorComponent::execUnRegistLuaTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics
	{
		struct LuaActorComponent_eventRegistLuaTick_Parms
		{
			float TickInterval;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaActorComponent_eventRegistLuaTick_Parms, TickInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::NewProp_TickInterval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaActorComponent, nullptr, "RegistLuaTick", nullptr, nullptr, sizeof(LuaActorComponent_eventRegistLuaTick_Parms), Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaActorComponent, nullptr, "UnRegistLuaTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuaActorComponent_NoRegister()
	{
		return ULuaActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULuaActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LuaNetSerialization_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LuaNetSerialization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LuaFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LuaFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuaActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuaActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick, "RegistLuaTick" }, // 1938299743
		{ &Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick, "UnRegistLuaTick" }, // 1601983676
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LuaActorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LuaActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaNetSerialization_MetaData[] = {
		{ "ModuleRelativePath", "Public/LuaActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaNetSerialization = { "LuaNetSerialization", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuaActorComponent, LuaNetSerialization), Z_Construct_UScriptStruct_FLuaNetSerialization, METADATA_PARAMS(Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaNetSerialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaNetSerialization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuaActorComponent, LuaFilePath), METADATA_PARAMS(Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuaActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaNetSerialization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULuaActorComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaOverriderInterface_NoRegister, (int32)VTABLE_OFFSET(ULuaActorComponent, ILuaOverriderInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuaActorComponent_Statics::ClassParams = {
		&ULuaActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULuaActorComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULuaActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuaActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuaActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuaActorComponent, 2540792374);
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaActorComponent>()
	{
		return ULuaActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuaActorComponent(Z_Construct_UClass_ULuaActorComponent, &ULuaActorComponent::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ULuaActorComponent"), false, nullptr, nullptr, nullptr);

	void ULuaActorComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_LuaNetSerialization(TEXT("LuaNetSerialization"));

		const bool bIsValid = true
			&& Name_LuaNetSerialization == ClassReps[(int32)ENetFields_Private::LuaNetSerialization].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULuaActorComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
