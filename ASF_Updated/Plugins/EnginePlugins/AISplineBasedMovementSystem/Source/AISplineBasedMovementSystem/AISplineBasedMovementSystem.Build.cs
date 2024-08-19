using UnrealBuildTool;

public class AISplineBasedMovementSystem : ModuleRules {
    public AISplineBasedMovementSystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "Engine",
            "NavigationSystem",
            //"GameplayTasks"
        });
        PrivateDependencyModuleNames.AddRange(new string[] { "GameplayTasks" });
    }
}
