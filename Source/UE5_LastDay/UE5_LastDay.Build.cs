// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_LastDay : ModuleRules
{
	public UE5_LastDay(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
