#include "SkillRestrictedLaunchZone.h"
#include "Templates/SubclassOf.h"

ASkillRestrictedLaunchZone::ASkillRestrictedLaunchZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkillClassToListen = NULL;
}

void ASkillRestrictedLaunchZone::OnSkillValidated(AASFPlayerController* Controller, const USkill* SkillValidated) {
}

void ASkillRestrictedLaunchZone::OnSkillStartDeploying(AASFPlayerController* Controller, const USkill* SkillValidated) {
}

void ASkillRestrictedLaunchZone::OnSkillDeployed(AASFPlayerController* Controller, const USkill* SkillValidated) {
}

bool ASkillRestrictedLaunchZone::IsRotationInArea_Implementation(const FVector& Location, const FRotator& Rotation) const {
    return false;
}

bool ASkillRestrictedLaunchZone::IsLocationInArea_Implementation(const FVector& Location) const {
    return false;
}

void ASkillRestrictedLaunchZone::DeActivateSkillRestrictedLaunchZone_Implementation() {
}

void ASkillRestrictedLaunchZone::ActivateSkillRestrictedLaunchZone_Implementation(TSubclassOf<USkill> SkillClass) {
}


