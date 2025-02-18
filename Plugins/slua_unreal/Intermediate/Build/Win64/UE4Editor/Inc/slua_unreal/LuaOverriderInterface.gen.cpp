// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_unreal/Public/LuaOverriderInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaOverriderInterface() {}
// Cross Module References
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverriderInterface_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverriderInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	DEFINE_FUNCTION(ILuaOverriderInterface::execGetLuaFilePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLuaFilePath_Implementation();
		P_NATIVE_END;
	}
	FString ILuaOverriderInterface::GetLuaFilePath() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLuaFilePath instead.");
		LuaOverriderInterface_eventGetLuaFilePath_Parms Parms;
		return Parms.ReturnValue;
	}
	void ULuaOverriderInterface::StaticRegisterNativesULuaOverriderInterface()
	{
		UClass* Class = ULuaOverriderInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLuaFilePath", &ILuaOverriderInterface::execGetLuaFilePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaOverriderInterface_eventGetLuaFilePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverriderInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaOverriderInterface, nullptr, "GetLuaFilePath", nullptr, nullptr, sizeof(LuaOverriderInterface_eventGetLuaFilePath_Parms), Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuaOverriderInterface_NoRegister()
	{
		return ULuaOverriderInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULuaOverriderInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuaOverriderInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuaOverriderInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath, "GetLuaFilePath" }, // 1199009396
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaOverriderInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverriderInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaOverriderInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILuaOverriderInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuaOverriderInterface_Statics::ClassParams = {
		&ULuaOverriderInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULuaOverriderInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaOverriderInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuaOverriderInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuaOverriderInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuaOverriderInterface, 201144652);
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaOverriderInterface>()
	{
		return ULuaOverriderInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuaOverriderInterface(Z_Construct_UClass_ULuaOverriderInterface, &ULuaOverriderInterface::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ULuaOverriderInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaOverriderInterface);
	static FName NAME_ULuaOverriderInterface_GetLuaFilePath = FName(TEXT("GetLuaFilePath"));
	FString ILuaOverriderInterface::Execute_GetLuaFilePath(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULuaOverriderInterface::StaticClass()));
		LuaOverriderInterface_eventGetLuaFilePath_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULuaOverriderInterface_GetLuaFilePath);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ILuaOverriderInterface*)(O->GetNativeInterfaceAddress(ULuaOverriderInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetLuaFilePath_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
