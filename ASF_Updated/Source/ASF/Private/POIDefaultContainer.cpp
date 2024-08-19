#include "POIDefaultContainer.h"

UPOIDefaultContainer::UPOIDefaultContainer() {
}

void UPOIDefaultContainer::SetPointOfInterestResult(const TArray<FStructPOIResult>& _PointOfInterestResult) {
}

void UPOIDefaultContainer::SetPointOfInterest(const TArray<UAIPointOfInterestConfig*>& _PointOfInterestConfig) {
}

TArray<FStructPOIResultData> UPOIDefaultContainer::GetPointOfInterestResultData() const {
    return TArray<FStructPOIResultData>();
}

TMap<UAIPointOfInterestVolatile*, FStructPOIResultData> UPOIDefaultContainer::GetPointOfInterestMappedResultData() const {
    return TMap<UAIPointOfInterestVolatile*, FStructPOIResultData>();
}

void UPOIDefaultContainer::ClearPointOfInterest() {
}


