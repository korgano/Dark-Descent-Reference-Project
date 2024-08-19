#include "Skill_Tool.h"

USkill_Tool::USkill_Tool() {
}

TArray<USkill*> USkill_Tool::SkillTool_SortByWeight(const TArray<USkill*>& Skills) {
    return TArray<USkill*>();
}

TArray<USkill*> USkill_Tool::SkillTool_GetSkillsUsingResource(const TArray<USkill*>& Skills, FGameplayTag _ResourceTag) {
    return TArray<USkill*>();
}

TArray<USkill*> USkill_Tool::SkillTool_GetSkillsUsingNoResource(const TArray<USkill*>& Skills) {
    return TArray<USkill*>();
}

TArray<USkill*> USkill_Tool::SkillTool_GetSkillsUsingCategory(const TArray<USkill*>& Skills, FGameplayTag _Category) {
    return TArray<USkill*>();
}


