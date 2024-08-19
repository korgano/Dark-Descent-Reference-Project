#include "CombatComponent.h"

UCombatComponent::UCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UsePriorityTarget = false;
    this->ASFCharacter = NULL;
    this->CanShootOnNotAttackingAlien = false;
    this->POITargetingComponent = NULL;
    this->InitialPrimaryWeapon = NULL;
    this->InitialSecondaryWeapon = NULL;
    this->InitialTertiaryWeapon = NULL;
    this->CanAttackResult = false;
    this->EquippedWeapon = NULL;
    this->PrimaryWeapon = NULL;
    this->SecondaryWeapon = NULL;
    this->TertiaryWeapon = NULL;
    this->ReloadActivityClass = NULL;
    this->UseAutoReload = false;
    this->Date_LastBurstEnd = 0.00f;
}

void UCombatComponent::UpdateSwap() {
}

void UCombatComponent::UpdateReload(AWeapon* Weapon) {
}

void UCombatComponent::TryFire(float _DeltaTime) {
}

void UCombatComponent::SetWeaponInSlot(AWeapon* _Weapon, FGameplayTag _WeaponSlot) {
}

void UCombatComponent::SetWeapon(AWeapon* _Weapon) {
}

void UCombatComponent::SetEquippedWeapon(AWeapon* _Weapon) {
}

void UCombatComponent::SetDate_LastBurstEnd(float _Date_LastBurstEnd) {
}

void UCombatComponent::SetCharacter(AASFCharacter* _Character) {
}

void UCombatComponent::ReloadResult(UActivity* Activity, EnumActionStatus Status) {
}

void UCombatComponent::OnWeaponEquippedChanged(AASFCharacter* Character, AItem* Item) {
}

void UCombatComponent::NotifyDamageDealtToTarget(UDamageReceiverComponent* Target, const FDamageResultStruct& DamageResult) {
}

void UCombatComponent::InitializeAllWeapons() {
}

bool UCombatComponent::HasValidTarget() {
    return false;
}

AWeapon* UCombatComponent::GetWeaponForSlot(FGameplayTag _WeaponSlot) const {
    return NULL;
}

AWeapon* UCombatComponent::GetWeaponEquiped() {
    return NULL;
}

AWeapon* UCombatComponent::GetTertiaryWeapon() const {
    return NULL;
}

FGameplayTag UCombatComponent::GetTagSlotWeaponEquiped() {
    return FGameplayTag{};
}

FGameplayTag UCombatComponent::GetTagAvailableWeaponBewteenPrimaryAndSecondary() {
    return FGameplayTag{};
}

AWeapon* UCombatComponent::GetSecondaryWeapon() const {
    return NULL;
}

AWeapon* UCombatComponent::GetPrimaryWeapon() const {
    return NULL;
}

bool UCombatComponent::GetAvailableAmmoTertiaryWeapon() {
    return false;
}

bool UCombatComponent::GetAvailableAmmoSecondaryWeapon() {
    return false;
}

bool UCombatComponent::GetAvailableAmmoPrimaryWeapon() {
    return false;
}

TArray<AWeapon*> UCombatComponent::GetAllWeapons() {
    return TArray<AWeapon*>();
}

void UCombatComponent::FindTargetingComponent() {
}

void UCombatComponent::EquipWeapon(FGameplayTag _WeaponCategory, bool _Instant) {
}

void UCombatComponent::EnableWeaponsRender(bool _IsEnable) {
}

void UCombatComponent::DestroyAllWeapons() {
}

bool UCombatComponent::CanAttack() const {
    return false;
}


