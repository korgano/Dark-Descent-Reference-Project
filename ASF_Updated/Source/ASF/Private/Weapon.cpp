#include "Weapon.h"
#include "WeaponStatComponent.h"

AWeapon::AWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsLastBulletFired = false;
    this->WeaponPrimaryDataAsset = NULL;
    this->WeaponStatComponent = CreateDefaultSubobject<UWeaponStatComponent>(TEXT("WeaponStatComponent"));
}

void AWeapon::TickWeapon_Implementation(float _DeltaTime) {
}

void AWeapon::OnWeaponUnEquiped() {
}

void AWeapon::OnWeaponEquiped() {
}

bool AWeapon::IsTargetAimedAt() const {
    return false;
}

bool AWeapon::IsAttackAgainstTargetIsASuccess(AActor* _Target) {
    return false;
}

bool AWeapon::HaveToDisplayProjectileDebug() {
    return false;
}

void AWeapon::GetWeaponCompatibility(FGameplayTagContainer& _TagContainer) {
}

float AWeapon::GetPrecisionToAttackTarget(AActor* _Target) {
    return 0.0f;
}

float AWeapon::GetHitChanceToAttackTarget(AActor* _Target) {
    return 0.0f;
}

float AWeapon::GetDodgeValueForRunning(AActor* _Target) const {
    return 0.0f;
}

float AWeapon::GetDodgeValueForFaction(AActor* _Target) {
    return 0.0f;
}

float AWeapon::GetDodgeValueForCover(AActor* _Target, ECoverType _CoverType) const {
    return 0.0f;
}

float AWeapon::GetAccuracyBonusForFlare(AActor* _Target) {
    return 0.0f;
}

void AWeapon::EnableWeaponRender(bool _IsEnable) {
}

void AWeapon::Attack_Implementation(FWeaponTargetStruct _Target) {
}


