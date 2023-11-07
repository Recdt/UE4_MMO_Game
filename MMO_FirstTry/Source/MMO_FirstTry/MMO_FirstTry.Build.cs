// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MMO_FirstTry : ModuleRules
{
	public MMO_FirstTry(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
