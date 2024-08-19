#include "AnimInstanceHumanoidRange.h"

UAnimInstanceHumanoidRange::UAnimInstanceHumanoidRange() {
    this->ReloadMontage = NULL;
    this->bIsReloading = false;
    this->bFireShotGun = false;
    this->AimingState = EnumCharacterAimingState::IDLE;
    this->CurrentWeaponEquiped = NULL;
    this->bIsFireing = false;
    this->fBlendTimeFireing = 0.00f;
    this->AlphaAImingVariation = 0.00f;
}

void UAnimInstanceHumanoidRange::StopShotgunBlast() {
}

void UAnimInstanceHumanoidRange::StopReload() {
}

void UAnimInstanceHumanoidRange::StopFlameThrowBlast() {
}

void UAnimInstanceHumanoidRange::StopFire() {
}

void UAnimInstanceHumanoidRange::StartShotgunBlast(bool Activate, float Duration) {
}

void UAnimInstanceHumanoidRange::StartFlameThrowBlast() {
}

void UAnimInstanceHumanoidRange::SetFire(bool bIsFire) {
}

void UAnimInstanceHumanoidRange::SetAimingState(EnumCharacterAimingState NewAimingState) {
}

void UAnimInstanceHumanoidRange::Reload(float fDuration) {
}

void UAnimInstanceHumanoidRange::OnWeaponFire(AWeapon* Weapon, FWeaponTargetStruct Target, bool bIsSuccess, const FDamageResultStruct& DamageResult) {
}



