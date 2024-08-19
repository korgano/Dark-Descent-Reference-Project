using UnrealBuildTool;

public class Tinda_MirrorAnimNode : ModuleRules {
    public Tinda_MirrorAnimNode(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
