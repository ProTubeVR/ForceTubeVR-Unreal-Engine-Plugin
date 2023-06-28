// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
using System;
using System.Text;


public class PFTUE5 : ModuleRules
{
	public PFTUE5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"Json",
				"JsonUtilities",
				"Core",
				// ... add private dependencies that you statically link with here ...	
			}
			);

		if (Target.Platform == UnrealTargetPlatform.Android)
		{
			PublicIncludePathModuleNames.Add("Launch");
			AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(ModuleDirectory, "ForceTubeVR_APL.xml")); 
		}

		if (Target.Platform == UnrealTargetPlatform.Win64)
        {
			RuntimeDependencies.Add("$(ProjectDir)/Plugins/PFTUE5/ForceTubeVR_API_x64.dll");

		}


		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
