using UnrealBuildTool;

public class ASFEditorTarget : TargetRules {
	public ASFEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"ASF",
			"LocalizationDynamic",
		});
	}
}
