#include "MarineAttributeDataAssets.h"

UMarineAttributeDataAssets::UMarineAttributeDataAssets() {
    this->Hidden = false;
    this->bMultiLevelAttribute = false;
    this->UnlockMarineRank = EMarineRank::ROOKIE;
}

FText UMarineAttributeDataAssets::GetMarineTrait(const UObject* WorldContextObject) const {
    return FText::GetEmpty();
}

UTexture2D* UMarineAttributeDataAssets::GetLoadedIcon() {
    return NULL;
}


