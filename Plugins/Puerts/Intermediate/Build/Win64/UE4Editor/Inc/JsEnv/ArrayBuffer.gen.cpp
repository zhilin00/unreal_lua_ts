// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsEnv/Public/ArrayBuffer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrayBuffer() {}
// Cross Module References
	JSENV_API UScriptStruct* Z_Construct_UScriptStruct_FArrayBufferValue();
	UPackage* Z_Construct_UPackage__Script_JsEnv();
	JSENV_API UScriptStruct* Z_Construct_UScriptStruct_FArrayBuffer();
// End Cross Module References
class UScriptStruct* FArrayBufferValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JSENV_API uint32 Get_Z_Construct_UScriptStruct_FArrayBufferValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayBufferValue, Z_Construct_UPackage__Script_JsEnv(), TEXT("ArrayBufferValue"), sizeof(FArrayBufferValue), Get_Z_Construct_UScriptStruct_FArrayBufferValue_Hash());
	}
	return Singleton;
}
template<> JSENV_API UScriptStruct* StaticStruct<FArrayBufferValue>()
{
	return FArrayBufferValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArrayBufferValue(FArrayBufferValue::StaticStruct, TEXT("/Script/JsEnv"), TEXT("ArrayBufferValue"), false, nullptr, nullptr);
static struct FScriptStruct_JsEnv_StaticRegisterNativesFArrayBufferValue
{
	FScriptStruct_JsEnv_StaticRegisterNativesFArrayBufferValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArrayBufferValue")),new UScriptStruct::TCppStructOps<FArrayBufferValue>);
	}
} ScriptStruct_JsEnv_StaticRegisterNativesFArrayBufferValue;
	struct Z_Construct_UScriptStruct_FArrayBufferValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayBufferValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArrayBuffer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArrayBufferValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayBufferValue>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayBufferValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JsEnv,
		nullptr,
		&NewStructOps,
		"ArrayBufferValue",
		sizeof(FArrayBufferValue),
		alignof(FArrayBufferValue),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayBufferValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayBufferValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArrayBufferValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArrayBufferValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_JsEnv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArrayBufferValue"), sizeof(FArrayBufferValue), Get_Z_Construct_UScriptStruct_FArrayBufferValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArrayBufferValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArrayBufferValue_Hash() { return 2143289174U; }
class UScriptStruct* FArrayBuffer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JSENV_API uint32 Get_Z_Construct_UScriptStruct_FArrayBuffer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayBuffer, Z_Construct_UPackage__Script_JsEnv(), TEXT("ArrayBuffer"), sizeof(FArrayBuffer), Get_Z_Construct_UScriptStruct_FArrayBuffer_Hash());
	}
	return Singleton;
}
template<> JSENV_API UScriptStruct* StaticStruct<FArrayBuffer>()
{
	return FArrayBuffer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArrayBuffer(FArrayBuffer::StaticStruct, TEXT("/Script/JsEnv"), TEXT("ArrayBuffer"), false, nullptr, nullptr);
static struct FScriptStruct_JsEnv_StaticRegisterNativesFArrayBuffer
{
	FScriptStruct_JsEnv_StaticRegisterNativesFArrayBuffer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArrayBuffer")),new UScriptStruct::TCppStructOps<FArrayBuffer>);
	}
} ScriptStruct_JsEnv_StaticRegisterNativesFArrayBuffer;
	struct Z_Construct_UScriptStruct_FArrayBuffer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayBuffer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArrayBuffer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArrayBuffer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayBuffer>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayBuffer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JsEnv,
		nullptr,
		&NewStructOps,
		"ArrayBuffer",
		sizeof(FArrayBuffer),
		alignof(FArrayBuffer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayBuffer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayBuffer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArrayBuffer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArrayBuffer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_JsEnv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArrayBuffer"), sizeof(FArrayBuffer), Get_Z_Construct_UScriptStruct_FArrayBuffer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArrayBuffer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArrayBuffer_Hash() { return 2762609675U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
