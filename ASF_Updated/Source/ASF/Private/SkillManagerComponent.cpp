#include "SkillManagerComponent.h"
#include "Templates/SubclassOf.h"

USkillManagerComponent::USkillManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveSkill = NULL;
    this->SkillInBackGround = NULL;
}

bool USkillManagerComponent::TryEndActiveSkill(TryEndSkillReason Reason, FGameplayTag _TrySkillTag, bool forceEndSkill) {
    return false;
}

void USkillManagerComponent::OnSkillLaunched(USkill* Skill) {
}

void USkillManagerComponent::OnSkillEnd(USkill* Skill, EnumActionStatus _Status) {
}

USkill* USkillManagerComponent::GetSkillWithTag(FGameplayTag Tag) {
    return NULL;
}

TArray<USkill*> USkillManagerComponent::GetSkills() {
    return TArray<USkill*>();
}

USkill* USkillManagerComponent::GetActiveSkill() {
    return NULL;
}

void USkillManagerComponent::CreateSkills(UDataTable* SkillDataTable, const FGameplayTagContainer& skillTagsContainer) {
}

void USkillManagerComponent::CreateSkill(const TSubclassOf<USkill>& SkillClass) {
}


