#include "RangeWeapon.h"

ARangeWeapon::ARangeWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentNbBulletInMagazine = 0;
    this->bIsFiringCycle = false;
    this->FiringEffect = NULL;
    this->FiringCycle_NbBulletFired = 0;
    this->FiringCycle_NbBulletToFire = 0;
    this->FiringCycle_DelayBetweenBullet = 0.00f;
    this->FiringCycle_DateLastFire = 0.00f;
}

void ARangeWeapon::UpgradeTagChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag EffectTag, bool bAdded) {
}

void ARangeWeapon::StopSound_Firing_Implementation() {
}

FDamageResultStruct ARangeWeapon::SimulateProjectile_Implementation(FWeaponTargetStruct _Target, bool IsSuccess, bool ForceEndSimulateProjectile, bool _UseAmmo, bool _DisableExpensiveEffects) {
    return FDamageResultStruct{};
}

void ARangeWeapon::SetUpgradeVisible_Implementation(FGameplayTag _UpgradeTag, bool _Visible) {
}

void ARangeWeapon::SetCurrentNbBulletInMagazine(const int32 _CurrentNbBulletInMagazine) {
}

void ARangeWeapon::PlaySound_NoAmmo_Implementation() {
}

void ARangeWeapon::PlaySound_Firing_Implementation() {
}

void ARangeWeapon::OnNotFiring() {
}

void ARangeWeapon::MaxNbBulletInMagazineUpdate(UTinda_Attribute* _Attribute, float _OldValue, float _NewValue) {
}

void ARangeWeapon::LastBulletFired() {
}

bool ARangeWeapon::HaveToReload() {
    return false;
}

FTransform ARangeWeapon::GetSecondaryMuzzleTransform_Implementation() {
    return FTransform{};
}

int32 ARangeWeapon::GetNbBulletToFireAtFrame(float& _OverTime) {
    return 0;
}

int32 ARangeWeapon::GetNbBulletByFiringCycle() {
    return 0;
}

FTransform ARangeWeapon::GetMuzzleTransform_Implementation() {
    return FTransform{};
}

FVector ARangeWeapon::GetLocationToFireAt(bool _bIsSuccess) {
    return FVector{};
}

int32 ARangeWeapon::GetCurrentNbBulletInMagazine() const {
    return 0;
}

FVector ARangeWeapon::GenerateAccuracyError(FVector _TargetLocation) {
    return FVector{};
}

void ARangeWeapon::EndFiringCycle() {
}

bool ARangeWeapon::CanAttack() {
    return false;
}


