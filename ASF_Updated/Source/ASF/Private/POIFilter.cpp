#include "POIFilter.h"

UPOIFilter::UPOIFilter() {
    this->FilterType = EnumFilterType::CONDITION;
    this->FilterConditionCanBlock = false;
}

float UPOIFilter::GetFilterUnit(const UAIPointOfInterestVolatile* _Requester) const {
    return 0.0f;
}

EnumFilterType UPOIFilter::GetFilterType() const {
    return EnumFilterType::CONDITION;
}

FGameplayTag UPOIFilter::GetFilterTag() const {
    return FGameplayTag{};
}

void UPOIFilter::DebugFilterWeight(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, float FilterWeight, bool FilterResult) {
}

void UPOIFilter::DebugFilterCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, bool FilterResult, TMap<FGameplayTag, FStructDataModifierContainer>& _ModifierData) {
}

void UPOIFilter::ComputeModifierWeight(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, float& FilterResult) {
}

void UPOIFilter::ComputeModifierCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, bool& FilterResult) {
}

bool UPOIFilter::ComputeFilterWeight_int(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, EnumPOIFilterWeightCurveType& _WeightType, TMap<FGameplayTag, FStructDataModifierContainer>& _ModifierData, float& _WeightValue) {
    return false;
}

bool UPOIFilter::ComputeFilterWeight(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, EnumPOIFilterWeightCurveType& _WeightType, TMap<FGameplayTag, FStructDataModifierContainer>& _ModifierData, float& _WeightValue) {
    return false;
}

bool UPOIFilter::ComputeFilterCondition_int(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, TMap<FGameplayTag, FStructDataModifierContainer>& _ModifierData) {
    return false;
}

bool UPOIFilter::ComputeFilterCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, TMap<FGameplayTag, FStructDataModifierContainer>& _ModifierData) {
    return false;
}

void UPOIFilter::ComputeDataModifier(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, TMap<FGameplayTag, FStructDataModifierContainer>& _ModifierData) {
}

bool UPOIFilter::ComputeCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData) {
    return false;
}


