using UnrealBuildTool;

public class CoreModule : ModuleRules
{
	public CoreModule(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine" });

		//PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		//PublicDependencyModuleNames.AddRange(new string[] { });
	}
}