#include "WeaponActorComponent.h"

UWeaponActorComponent::UWeaponActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UWeaponActorComponent::OnFire_Implementation(ARangeWeapon* _Weapon, FWeaponTargetStruct _Target, bool _bIsSuccess, FDamageResultStruct _DamageResult) {
    return false;
}


