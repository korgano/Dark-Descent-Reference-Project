#include "AIPointOfInterestContainer.h"

UAIPointOfInterestContainer::UAIPointOfInterestContainer() {
}

void UAIPointOfInterestContainer::RemovePOI(UAIPointOfInterestConfig* _PointOfInterestConfig) {
}

bool UAIPointOfInterestContainer::HasPOI() const {
    return false;
}

int32 UAIPointOfInterestContainer::GetContainerPointOfInterestNumber() const {
    return 0;
}

TArray<UAIPointOfInterestConfig*> UAIPointOfInterestContainer::GetContainerPointOfInterest() const {
    return TArray<UAIPointOfInterestConfig*>();
}

TArray<FStructPOIResult> UAIPointOfInterestContainer::GetAvailablePOI(UAIPointOfInterestVolatile* _RequestingPOI, const TArray<UAIPointOfInterestContainer*>& _Containers, EnumPOIResearchType RunMode, const FGameplayTagContainer& _Categories, const TMap<UAIPointOfInterestVolatile*, FStructPOIResultData>& _MappedResultData, bool& _PoiFound) {
    return TArray<FStructPOIResult>();
}

void UAIPointOfInterestContainer::GetActivePOI(const FGameplayTagContainer& _Categories, TArray<UAIPointOfInterestVolatile*>& _POIActive, TArray<FStructPOIResultData>& _POIActiveResultData) {
}

void UAIPointOfInterestContainer::GetActivationPolicy(UAIPointOfInterestVolatile* _POIRequester, UAIPointOfInterestVolatile* _POIRequested, EnumPOIComputationPolicy& POIComputationPolicy, float& ActivationThreshold) const {
}

UAIPointOfInterestConfig* UAIPointOfInterestContainer::FindOwner(UObject* _Owner) {
    return NULL;
}

bool UAIPointOfInterestContainer::ContainPOI(UAIPointOfInterestConfig* _PointOfInterestConfig) const {
    return false;
}

bool UAIPointOfInterestContainer::ContainOwner(UObject* _Owner) {
    return false;
}

void UAIPointOfInterestContainer::ContainerEnablePOI(UAIPointOfInterestVolatile* _PointOfInterest, float activationTime) {
}

void UAIPointOfInterestContainer::ContainerDisablePOI(UAIPointOfInterestVolatile* _PointOfInterest) {
}

void UAIPointOfInterestContainer::AddPOI(UAIPointOfInterestConfig* _PointOfInterestConfig) {
}


