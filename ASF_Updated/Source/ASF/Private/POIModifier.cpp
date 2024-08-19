#include "POIModifier.h"

UPOIModifier::UPOIModifier() {
    this->ModifierType = EnumFilterType::CONDITION;
}

EnumFilterType UPOIModifier::GetModifierType() const {
    return EnumFilterType::CONDITION;
}

FGameplayTag UPOIModifier::GetModifierTag() const {
    return FGameplayTag{};
}

void UPOIModifier::ComputeModifierWeight_int(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, float& FilterResult) {
}

void UPOIModifier::ComputeModifierWeight(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, float& FilterResult) {
}

void UPOIModifier::ComputeModifierCondition_int(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, bool& FilterResult) {
}

void UPOIModifier::ComputeModifierCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, bool& FilterResult) {
}

bool UPOIModifier::ComputeCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData) {
    return false;
}


