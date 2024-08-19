using UnrealBuildTool;

public class ASFGameTarget : TargetRules {
	public ASFGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"ASF",
			"LocalizationDynamic",
		});
	}
}
