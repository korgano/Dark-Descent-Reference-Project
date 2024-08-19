#include "MeleeWeapon.h"

AMeleeWeapon::AMeleeWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectedWeaponCosmeticIdx = 0;
}

UAIAction_Attack* AMeleeWeapon::SelectAttack(AActor* Target) {
    return NULL;
}

void AMeleeWeapon::OnCharacterInit(AWeapon* _Weapon, AASFCharacter* _Character) {
}

void AMeleeWeapon::InitWeaponCosmetic() {
}

void AMeleeWeapon::InitAttacks(const TArray<TSoftClassPtr<UAIAction_Attack>>& _AIAttackAvailable) {
}

bool AMeleeWeapon::GetSelectedWeaponCosmetic(FWeaponCosmetic& _WeaponCosmetic) {
    return false;
}


