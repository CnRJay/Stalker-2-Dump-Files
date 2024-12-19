using UnrealBuildTool;

public class BinkMedia : ModuleRules {
    public BinkMedia(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BinkMediaPlayer",
            "Core",
            "CoreUObject",
            "Engine",
            "MediaAssets",
        });
    }
}
