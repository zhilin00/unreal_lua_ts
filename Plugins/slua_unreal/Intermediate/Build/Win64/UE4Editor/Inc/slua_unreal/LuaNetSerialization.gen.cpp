// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_unreal/Public/LuaNetSerialization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaNetSerialization() {}
// Cross Module References
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FLuaNetSerialization();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
class UScriptStruct* FLuaNetSerialization::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLUA_UNREAL_API uint32 Get_Z_Construct_UScriptStruct_FLuaNetSerialization_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuaNetSerialization, Z_Construct_UPackage__Script_slua_unreal(), TEXT("LuaNetSerialization"), sizeof(FLuaNetSerialization), Get_Z_Construct_UScriptStruct_FLuaNetSerialization_Hash());
	}
	return Singleton;
}
template<> SLUA_UNREAL_API UScriptStruct* StaticStruct<FLuaNetSerialization>()
{
	return FLuaNetSerialization::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLuaNetSerialization(FLuaNetSerialization::StaticStruct, TEXT("/Script/slua_unreal"), TEXT("LuaNetSerialization"), false, nullptr, nullptr);
static struct FScriptStruct_slua_unreal_StaticRegisterNativesFLuaNetSerialization
{
	FScriptStruct_slua_unreal_StaticRegisterNativesFLuaNetSerialization()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LuaNetSerialization")),new UScriptStruct::TCppStructOps<FLuaNetSerialization>);
	}
} ScriptStruct_slua_unreal_StaticRegisterNativesFLuaNetSerialization;
	struct Z_Construct_UScriptStruct_FLuaNetSerialization_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuaNetSerialization_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaNetSerialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLuaNetSerialization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLuaNetSerialization>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLuaNetSerialization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
		nullptr,
		&NewStructOps,
		"LuaNetSerialization",
		sizeof(FLuaNetSerialization),
		alignof(FLuaNetSerialization),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLuaNetSerialization_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaNetSerialization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLuaNetSerialization()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLuaNetSerialization_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_slua_unreal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LuaNetSerialization"), sizeof(FLuaNetSerialization), Get_Z_Construct_UScriptStruct_FLuaNetSerialization_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLuaNetSerialization_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLuaNetSerialization_Hash() { return 3846529935U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
