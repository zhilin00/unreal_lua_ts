// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_unreal/Public/ProfileDataDefine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileDataDefine() {}
// Cross Module References
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FunctionProfileCallInfo();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FLuaFunctionDefine();
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FunctionProfileNode();
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FileMemInfo();
// End Cross Module References
class UScriptStruct* FunctionProfileCallInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLUA_UNREAL_API uint32 Get_Z_Construct_UScriptStruct_FunctionProfileCallInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FunctionProfileCallInfo, Z_Construct_UPackage__Script_slua_unreal(), TEXT("unctionProfileCallInfo"), sizeof(FunctionProfileCallInfo), Get_Z_Construct_UScriptStruct_FunctionProfileCallInfo_Hash());
	}
	return Singleton;
}
template<> SLUA_UNREAL_API UScriptStruct* StaticStruct<FunctionProfileCallInfo>()
{
	return FunctionProfileCallInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FunctionProfileCallInfo(FunctionProfileCallInfo::StaticStruct, TEXT("/Script/slua_unreal"), TEXT("unctionProfileCallInfo"), false, nullptr, nullptr);
static struct FScriptStruct_slua_unreal_StaticRegisterNativesFunctionProfileCallInfo
{
	FScriptStruct_slua_unreal_StaticRegisterNativesFunctionProfileCallInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("unctionProfileCallInfo")),new UScriptStruct::TCppStructOps<FunctionProfileCallInfo>);
	}
} ScriptStruct_slua_unreal_StaticRegisterNativesFunctionProfileCallInfo;
	struct Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_functionDefine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_functionDefine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_begTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_begTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCoroutineBegin_MetaData[];
#endif
		static void NewProp_bIsCoroutineBegin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCoroutineBegin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FunctionProfileCallInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_functionDefine_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_functionDefine = { "functionDefine", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionProfileCallInfo, functionDefine), Z_Construct_UScriptStruct_FLuaFunctionDefine, METADATA_PARAMS(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_functionDefine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_functionDefine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_begTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_begTime = { "begTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionProfileCallInfo, begTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_begTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_begTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_bIsCoroutineBegin_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_bIsCoroutineBegin_SetBit(void* Obj)
	{
		((FunctionProfileCallInfo*)Obj)->bIsCoroutineBegin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_bIsCoroutineBegin = { "bIsCoroutineBegin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FunctionProfileCallInfo), &Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_bIsCoroutineBegin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_bIsCoroutineBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_bIsCoroutineBegin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_functionDefine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_begTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_bIsCoroutineBegin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
		nullptr,
		&NewStructOps,
		"unctionProfileCallInfo",
		sizeof(FunctionProfileCallInfo),
		alignof(FunctionProfileCallInfo),
		Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FunctionProfileCallInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FunctionProfileCallInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_slua_unreal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("unctionProfileCallInfo"), sizeof(FunctionProfileCallInfo), Get_Z_Construct_UScriptStruct_FunctionProfileCallInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FunctionProfileCallInfo_Hash() { return 605364954U; }
class UScriptStruct* FunctionProfileNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLUA_UNREAL_API uint32 Get_Z_Construct_UScriptStruct_FunctionProfileNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FunctionProfileNode, Z_Construct_UPackage__Script_slua_unreal(), TEXT("unctionProfileNode"), sizeof(FunctionProfileNode), Get_Z_Construct_UScriptStruct_FunctionProfileNode_Hash());
	}
	return Singleton;
}
template<> SLUA_UNREAL_API UScriptStruct* StaticStruct<FunctionProfileNode>()
{
	return FunctionProfileNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FunctionProfileNode(FunctionProfileNode::StaticStruct, TEXT("/Script/slua_unreal"), TEXT("unctionProfileNode"), false, nullptr, nullptr);
static struct FScriptStruct_slua_unreal_StaticRegisterNativesFunctionProfileNode
{
	FScriptStruct_slua_unreal_StaticRegisterNativesFunctionProfileNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("unctionProfileNode")),new UScriptStruct::TCppStructOps<FunctionProfileNode>);
	}
} ScriptStruct_slua_unreal_StaticRegisterNativesFunctionProfileNode;
	struct Z_Construct_UScriptStruct_FunctionProfileNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_functionDefine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_functionDefine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_costTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_costTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_countOfCalls_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_countOfCalls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_layerIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_layerIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FunctionProfileNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_functionDefine_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_functionDefine = { "functionDefine", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionProfileNode, functionDefine), Z_Construct_UScriptStruct_FLuaFunctionDefine, METADATA_PARAMS(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_functionDefine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_functionDefine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_costTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_costTime = { "costTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionProfileNode, costTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_costTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_costTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_countOfCalls_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_countOfCalls = { "countOfCalls", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionProfileNode, countOfCalls), METADATA_PARAMS(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_countOfCalls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_countOfCalls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_layerIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_layerIdx = { "layerIdx", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionProfileNode, layerIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_layerIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_layerIdx_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FunctionProfileNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_functionDefine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_costTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_countOfCalls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_layerIdx,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FunctionProfileNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
		nullptr,
		&NewStructOps,
		"unctionProfileNode",
		sizeof(FunctionProfileNode),
		alignof(FunctionProfileNode),
		Z_Construct_UScriptStruct_FunctionProfileNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FunctionProfileNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FunctionProfileNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_slua_unreal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("unctionProfileNode"), sizeof(FunctionProfileNode), Get_Z_Construct_UScriptStruct_FunctionProfileNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FunctionProfileNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FunctionProfileNode_Hash() { return 2018083188U; }
class UScriptStruct* FLuaFunctionDefine::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLUA_UNREAL_API uint32 Get_Z_Construct_UScriptStruct_FLuaFunctionDefine_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuaFunctionDefine, Z_Construct_UPackage__Script_slua_unreal(), TEXT("LuaFunctionDefine"), sizeof(FLuaFunctionDefine), Get_Z_Construct_UScriptStruct_FLuaFunctionDefine_Hash());
	}
	return Singleton;
}
template<> SLUA_UNREAL_API UScriptStruct* StaticStruct<FLuaFunctionDefine>()
{
	return FLuaFunctionDefine::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLuaFunctionDefine(FLuaFunctionDefine::StaticStruct, TEXT("/Script/slua_unreal"), TEXT("LuaFunctionDefine"), false, nullptr, nullptr);
static struct FScriptStruct_slua_unreal_StaticRegisterNativesFLuaFunctionDefine
{
	FScriptStruct_slua_unreal_StaticRegisterNativesFLuaFunctionDefine()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LuaFunctionDefine")),new UScriptStruct::TCppStructOps<FLuaFunctionDefine>);
	}
} ScriptStruct_slua_unreal_StaticRegisterNativesFLuaFunctionDefine;
	struct Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fileNameIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_fileNameIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_functionNameIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_functionNameIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lineDefined_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lineDefined;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLuaFunctionDefine>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_fileNameIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_fileNameIndex = { "fileNameIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLuaFunctionDefine, fileNameIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_fileNameIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_fileNameIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_functionNameIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_functionNameIndex = { "functionNameIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLuaFunctionDefine, functionNameIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_functionNameIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_functionNameIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_lineDefined_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_lineDefined = { "lineDefined", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLuaFunctionDefine, lineDefined), METADATA_PARAMS(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_lineDefined_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_lineDefined_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_fileNameIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_functionNameIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_lineDefined,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
		nullptr,
		&NewStructOps,
		"LuaFunctionDefine",
		sizeof(FLuaFunctionDefine),
		alignof(FLuaFunctionDefine),
		Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLuaFunctionDefine()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLuaFunctionDefine_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_slua_unreal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LuaFunctionDefine"), sizeof(FLuaFunctionDefine), Get_Z_Construct_UScriptStruct_FLuaFunctionDefine_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLuaFunctionDefine_Hash() { return 4143419137U; }
class UScriptStruct* FileMemInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLUA_UNREAL_API uint32 Get_Z_Construct_UScriptStruct_FileMemInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FileMemInfo, Z_Construct_UPackage__Script_slua_unreal(), TEXT("ileMemInfo"), sizeof(FileMemInfo), Get_Z_Construct_UScriptStruct_FileMemInfo_Hash());
	}
	return Singleton;
}
template<> SLUA_UNREAL_API UScriptStruct* StaticStruct<FileMemInfo>()
{
	return FileMemInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FileMemInfo(FileMemInfo::StaticStruct, TEXT("/Script/slua_unreal"), TEXT("ileMemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_slua_unreal_StaticRegisterNativesFileMemInfo
{
	FScriptStruct_slua_unreal_StaticRegisterNativesFileMemInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ileMemInfo")),new UScriptStruct::TCppStructOps<FileMemInfo>);
	}
} ScriptStruct_slua_unreal_StaticRegisterNativesFileMemInfo;
	struct Z_Construct_UScriptStruct_FileMemInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fileNameIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_fileNameIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lineNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lineNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_difference_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_difference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FileMemInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FileMemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FileMemInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_fileNameIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_fileNameIndex = { "fileNameIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileMemInfo, fileNameIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_fileNameIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_fileNameIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_lineNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_lineNumber = { "lineNumber", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileMemInfo, lineNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_lineNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_lineNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_size_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileMemInfo, size), METADATA_PARAMS(Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_difference_MetaData[] = {
		{ "Comment", "// one line memory difference between two point\n" },
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
		{ "ToolTip", "one line memory difference between two point" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_difference = { "difference", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileMemInfo, difference), METADATA_PARAMS(Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_difference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_difference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FileMemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_fileNameIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_lineNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_difference,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FileMemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
		nullptr,
		&NewStructOps,
		"ileMemInfo",
		sizeof(FileMemInfo),
		alignof(FileMemInfo),
		Z_Construct_UScriptStruct_FileMemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FileMemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FileMemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FileMemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FileMemInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FileMemInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_slua_unreal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ileMemInfo"), sizeof(FileMemInfo), Get_Z_Construct_UScriptStruct_FileMemInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FileMemInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FileMemInfo_Hash() { return 618264462U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
