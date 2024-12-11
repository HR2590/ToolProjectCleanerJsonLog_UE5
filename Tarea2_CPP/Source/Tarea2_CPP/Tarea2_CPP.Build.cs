// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tarea2_CPP : ModuleRules
{
	public Tarea2_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput"});
	}
}
