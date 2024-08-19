#include "POIDataModifier.h"

UPOIDataModifier::UPOIDataModifier() {
}

FGameplayTag UPOIDataModifier::GetModifierTag() const {
    return FGameplayTag{};
}

void UPOIDataModifier::ComputeModifierData_int(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, TArray<FStructDataModifier>& ModifierData) {
}

bool UPOIDataModifier::ComputeCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData) {
    return false;
}

void UPOIDataModifier::ComputeAvailableDataModifier(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData, TArray<UPOIDataModifier*>& ModifierData) {
}


