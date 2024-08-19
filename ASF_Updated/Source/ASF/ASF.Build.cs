using UnrealBuildTool;

public class ASF : ModuleRules {
    public ASF(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            //"ASFModule",
            "AIModule",
            "AISplineBasedMovementSystem",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "NavigationSystem",
            "Niagara",
            "PhysicsCore",
            "ProceduralMeshComponent",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "Tinda_EffectPlugin",
            "Tinda_MirrorAnimNode",
            "Tinda_Widget",
            "UMG",
        });
        PrivateDependencyModuleNames.AddRange(new string[] { "GameplayTasks" });
    }
}
