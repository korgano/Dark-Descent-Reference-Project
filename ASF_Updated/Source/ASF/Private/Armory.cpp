#include "Armory.h"

AArmory::AArmory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AArmory::RemoveNewAvailableWeapon(FGameplayTag _WeaponTag) {
}

void AArmory::PurchaseWeaponUpgrade(FGameplayTag _WeaponTag) {
}

FWeaponUpgrade AArmory::GetWeaponUpgrade(FGameplayTag _WeaponTag) const {
    return FWeaponUpgrade{};
}

FGameplayTagContainer AArmory::GetPurchasableWeapons() const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer AArmory::GetAllWeapons() const {
    return FGameplayTagContainer{};
}

bool AArmory::CanEquipWeaponUpgrade(FGameplayTag _WeaponTag) const {
    return false;
}

bool AArmory::CanAffordWeaponUpgrade(FGameplayTag _WeaponTag) const {
    return false;
}


