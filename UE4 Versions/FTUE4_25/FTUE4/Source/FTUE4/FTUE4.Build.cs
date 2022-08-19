// Some copyright should be here...

using UnrealBuildTool;
using System.IO;
using System;
using System.Text;

public class FTUE4 : ModuleRules
{
	public FTUE4(ReadOnlyTargetRules Target) : base(Target)
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
            //ReceiptProperties.Add("$(ProjectDir)/Plugins/ForceTubeVRForUE4/Source/ForceTubeVRForUE4/ForceTubeVR_APL.xml");
            //RuntimeDependencies.Add("$(ProjectDir)/Plugins/ForceTubeVRForUE4/Source/ForceTubeVRForUE4/ForceTubeVR_APL.xml");
            AdditionalPropertiesForReceipt.Add(new ReceiptProperty("AndroidPlugin", Path.Combine(ModuleDirectory, "ForceTubeVR_APL.xml"))); //test actuel (marche presque quand on gerte tout)
            //AdditionalPropertiesForReceipt.Add(new ReceiptProperty("AndroidPluginAar", Path.Combine(PluginPath, "../../Android/ForceTubeVR_API_Android.aar")));
            //AdditionalPropertiesForReceipt.Add(new ReceiptProperty("AndroidPluginJar", Path.Combine(PluginPath, "../../Android/ForceTubeVR_API_Android.jar")));
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
