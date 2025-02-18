// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_unreal/Public/LuaUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaUserWidget() {}
// Cross Module References
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaUserWidget_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverriderInterface_NoRegister();
// End Cross Module References
	void ULuaUserWidget::StaticRegisterNativesULuaUserWidget()
	{
	}
	UClass* Z_Construct_UClass_ULuaUserWidget_NoRegister()
	{
		return ULuaUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULuaUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LuaFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LuaFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuaUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuaUserWidget.h" },
		{ "ModuleRelativePath", "Public/LuaUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "Comment", "// below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\n// so copy & paste them\n" },
		{ "ModuleRelativePath", "Public/LuaUserWidget.h" },
		{ "ToolTip", "below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\nso copy & paste them" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuaUserWidget, LuaFilePath), METADATA_PARAMS(Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuaUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULuaUserWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaOverriderInterface_NoRegister, (int32)VTABLE_OFFSET(ULuaUserWidget, ILuaOverriderInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuaUserWidget_Statics::ClassParams = {
		&ULuaUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULuaUserWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULuaUserWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULuaUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuaUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuaUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuaUserWidget, 965229304);
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaUserWidget>()
	{
		return ULuaUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuaUserWidget(Z_Construct_UClass_ULuaUserWidget, &ULuaUserWidget::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ULuaUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
