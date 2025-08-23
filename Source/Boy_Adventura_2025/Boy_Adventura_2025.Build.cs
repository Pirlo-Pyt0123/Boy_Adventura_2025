// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Boy_Adventura_2025 : ModuleRules
{
	public Boy_Adventura_2025(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
