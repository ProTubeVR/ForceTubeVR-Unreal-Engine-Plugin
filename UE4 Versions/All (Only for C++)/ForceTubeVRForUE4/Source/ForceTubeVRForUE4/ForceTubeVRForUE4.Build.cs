// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ForceTubeVRForUE4 : ModuleRules
{
#if UE_4_17_OR_LATER
    public ForceTubeVRForUE4(ReadOnlyTargetRules  Target) : base(Target)
#else
    public ForceTubeVRForUE4(TargetInfo Target)
#endif
    {
		
		PublicIncludePaths.AddRange(
			new string[] {
				"ForceTubeVRForUE4/Public"
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"ForceTubeVRForUE4/Private",
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "InputCore"
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
				// ... add private dependencies that you statically link with here ...	
			}
			);

        RuntimeDependencies.Add(new RuntimeDependency("$(ProjectDir)/Plugins/ForceTubeVRForUE4/ForceTubeVR.dll"));
    }
}
