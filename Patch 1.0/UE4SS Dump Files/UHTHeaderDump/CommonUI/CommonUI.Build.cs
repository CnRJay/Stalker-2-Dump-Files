using UnrealBuildTool;

public class CommonUI : ModuleRules {
    public CommonUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonInput",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "InputCore",
            "MediaAssets",
            "SlateCore",
            "UMG",
        });
    }
}
