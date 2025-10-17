// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPP_DM1_SALLA : ModuleRules
{
	public CPP_DM1_SALLA(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CPP_DM1_SALLA",
			"CPP_DM1_SALLA/Variant_Horror",
			"CPP_DM1_SALLA/Variant_Horror/UI",
			"CPP_DM1_SALLA/Variant_Shooter",
			"CPP_DM1_SALLA/Variant_Shooter/AI",
			"CPP_DM1_SALLA/Variant_Shooter/UI",
			"CPP_DM1_SALLA/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
