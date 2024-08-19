#include "Skill_Diversion.h"

USkill_Diversion::USkill_Diversion() {
    this->bIsThrowing = false;
    this->bHasThrown = false;
}

void USkill_Diversion::SpawnProjectile_Implementation() {
}

void USkill_Diversion::SetProjectileThrown() {
}

FVector USkill_Diversion::GetTargetLocation_Implementation(FVector _StartLocation) {
    return FVector{};
}


