#include "LaunchSkillSubObjectiveComponent.h"

ULaunchSkillSubObjectiveComponent::ULaunchSkillSubObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Method = LaunchSkillSubObjectiveComponentMethod::ON_END;
}

void ULaunchSkillSubObjectiveComponent::OnSquadMemberAdded(ASquad* Squad, AHumanoidMarine* Character) {
}

void ULaunchSkillSubObjectiveComponent::OnSquadCreated(AASFPlayerState* PlayerState, ASquad* Squad) {
}

void ULaunchSkillSubObjectiveComponent::OnSkillLaunched(USkill* Skill) {
}

void ULaunchSkillSubObjectiveComponent::OnSkillEvent(USkill* Skill, EnumActionStatus _Status) {
}


