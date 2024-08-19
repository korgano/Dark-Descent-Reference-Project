#include "Skill_PrecisionShot.h"

USkill_PrecisionShot::USkill_PrecisionShot() {
    this->Target = NULL;
    this->NeedToAim = true;
}

void USkill_PrecisionShot::OnAimingFinished_Implementation(AActor* _Target) {
}

FDamageResultStruct USkill_PrecisionShot::GetKillDamageResult_Implementation(AActor* _Target) {
    return FDamageResultStruct{};
}


