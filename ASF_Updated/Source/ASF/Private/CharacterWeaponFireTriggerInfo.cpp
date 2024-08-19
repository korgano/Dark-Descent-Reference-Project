#include "CharacterWeaponFireTriggerInfo.h"

UCharacterWeaponFireTriggerInfo::UCharacterWeaponFireTriggerInfo() {
    this->TriggerLabel = TEXT("Default__CharacterWeaponFireTriggerInfo");
}

void UCharacterWeaponFireTriggerInfo::OnWeaponFire(AWeapon* _Weapon, FWeaponTargetStruct _Target, bool _bIsSuccess, const FDamageResultStruct& _DamageResult) {
}

void UCharacterWeaponFireTriggerInfo::OnCharacterDestroyed(AActor* DestroyedActor) {
}

void UCharacterWeaponFireTriggerInfo::BindEventToWeapon(UCombatComponent* CombatComponent, AWeapon* Weapon) {
}

void UCharacterWeaponFireTriggerInfo::BindEventToCharacter(AASFGameStateBase* GameState, AActor* Actor) {
}


