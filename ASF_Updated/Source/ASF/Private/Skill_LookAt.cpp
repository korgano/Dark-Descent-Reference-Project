#include "Skill_LookAt.h"

USkill_LookAt::USkill_LookAt() {
    this->CursorZOffset = 100.00f;
    this->Controller = NULL;
    this->Launched = false;
}

void USkill_LookAt::SetLocation(FVector _Location) {
}

FVector USkill_LookAt::GetLocationToAimAt(FVector& Origin, bool _Launched) {
    return FVector{};
}

FVector USkill_LookAt::CheckCollider_Implementation() {
    return FVector{};
}


