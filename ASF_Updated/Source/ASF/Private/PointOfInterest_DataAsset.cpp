#include "PointOfInterest_DataAsset.h"

UPointOfInterest_DataAsset::UPointOfInterest_DataAsset() {
    this->ComputationPolicy = EnumPOIComputationPolicy::BOTH;
    this->SaveResult = false;
    this->PerceptionCooldown = 0.00f;
    this->ValidationThreshold = 0.00f;
    this->ActivationThreshold = 0.00f;
}

TArray<UPOIModifier*> UPointOfInterest_DataAsset::GetModifierWithTag(FGameplayTag _ModifierTag) const {
    return TArray<UPOIModifier*>();
}

TArray<UPOIDataModifier*> UPointOfInterest_DataAsset::GetDataModifierWithTag(FGameplayTag _ModifierTag) const {
    return TArray<UPOIDataModifier*>();
}


