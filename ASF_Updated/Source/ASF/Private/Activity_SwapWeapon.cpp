#include "Activity_SwapWeapon.h"
#include "EActivityAnimationType.h"
#include "EnumActivityType.h"

UActivity_SwapWeapon::UActivity_SwapWeapon() {
    this->ActivityType = EnumActivityType::SWAP_WEAPON;
    this->AnimationType = EActivityAnimationType::SWAP;
}

void UActivity_SwapWeapon::SetWeaponTag(FGameplayTag _WeaponTag) {
}


