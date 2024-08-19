#include "WeaponAttribute_DataAsset.h"

UWeaponAttribute_DataAsset::UWeaponAttribute_DataAsset() {
    this->PDA_Weapon = NULL;
}

FGameplayTag UWeaponAttribute_DataAsset::GetWeaponTrainingTag() const {
    return FGameplayTag{};
}

FText UWeaponAttribute_DataAsset::GetDescription() {
    return FText::GetEmpty();
}


