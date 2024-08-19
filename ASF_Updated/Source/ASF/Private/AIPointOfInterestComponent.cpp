#include "AIPointOfInterestComponent.h"

UAIPointOfInterestComponent::UAIPointOfInterestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CustomLocation = NULL;
    this->PointOfInterestConfig = NULL;
    this->PointOfInterestConfig_DataAsset = NULL;
    this->IsRoomPOI = true;
}

void UAIPointOfInterestComponent::SetPOIPoolTag(FGameplayTag _POIPoolTag) {
}

void UAIPointOfInterestComponent::SetPointOfInterestConfig(UPointOfInterestConfig_DataAsset* _PointOfInterestConfig_DataAsset) {
}

void UAIPointOfInterestComponent::SetIsRoomPOI(bool _IsRoomPOI) {
}

void UAIPointOfInterestComponent::RegenerateContainer_Implementation(AASFGameState_TacticalMode* GameState) {
}

void UAIPointOfInterestComponent::InitPointOfInterest() {
}

UPointOfInterestConfig_DataAsset* UAIPointOfInterestComponent::GetPointOfInterestConfig() {
    return NULL;
}

void UAIPointOfInterestComponent::EnableRoomPOI(const FGameplayTagContainer& _Categories, UObject* _Source, float _Duration) {
}

void UAIPointOfInterestComponent::DisableRoomPOI(const FGameplayTagContainer& _Categories) {
}

void UAIPointOfInterestComponent::DeletePointOfInterest() {
}


