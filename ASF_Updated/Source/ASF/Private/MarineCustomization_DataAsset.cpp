#include "MarineCustomization_DataAsset.h"

UMarineCustomization_DataAsset::UMarineCustomization_DataAsset() {
    this->NameCharacterLimit = 25;
    this->NicknameCharacterLimit = 25;
}

TArray<FMarineCustomOutfit> UMarineCustomization_DataAsset::GetOutfitFabrics(const UObject* _WorldContext) const {
    return TArray<FMarineCustomOutfit>();
}

TArray<FMarineCustomOutfit> UMarineCustomization_DataAsset::GetOutfitArmors(const UObject* _WorldContext) const {
    return TArray<FMarineCustomOutfit>();
}


