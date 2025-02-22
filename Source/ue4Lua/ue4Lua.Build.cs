// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ue4Lua : ModuleRules
{
	public ue4Lua(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "HTTP" });

		PrivateDependencyModuleNames.AddRange(new string[] { "slua_unreal", "slua_profile", "Slate", "SlateCore", "UMG", "HTTP", "UnLua", "Lua",});

		PrivateIncludePathModuleNames.AddRange(new string[] { "slua_unreal" });
		PublicIncludePathModuleNames.AddRange(new string[] { "slua_unreal", "slua_profile" });

#if UE_4_21_OR_LATER
        PublicDefinitions.Add("ENABLE_PROFILER");
#else
		Definitions.Add("ENABLE_PROFILER");
#endif
	}
}
