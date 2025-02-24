// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class unreal_puerts : ModuleRules
{
	public unreal_puerts(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "JsEnv", "UMG", "Puerts" });
	}
}
