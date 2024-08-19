#include "AIPointOfInterestConfig.h"

UAIPointOfInterestConfig::UAIPointOfInterestConfig() {
    this->Owner = NULL;
    this->DominantPOI = NULL;
}

void UAIPointOfInterestConfig::RebuildPOI() {
}

void UAIPointOfInterestConfig::OnTindaWorldTimeInitialized(AGameStateBase* GameState, float Value) {
}

void UAIPointOfInterestConfig::InitPOI(UObject* _Owner, FVector _WorldLocation, UPointOfInterestConfig_DataAsset* _PointOfInterestConfig_DataAsset) {
}

UAIPointOfInterestVolatile* UAIPointOfInterestConfig::GetPointOfInterest(FGameplayTag _POITag) const {
    return NULL;
}

UObject* UAIPointOfInterestConfig::GetOwner() const {
    return NULL;
}

UAIPointOfInterestVolatile* UAIPointOfInterestConfig::GetDominantPOI() const {
    return NULL;
}

void UAIPointOfInterestConfig::GetContainer(TArray<UAIPointOfInterestContainer*>& _POIContainers) {
}

void UAIPointOfInterestConfig::ConfigEnablePOI(FGameplayTag _Category, UObject* _Source, float _Duration) {
}

void UAIPointOfInterestConfig::ConfigDisablePOI(FGameplayTag _Category) {
}

void UAIPointOfInterestConfig::ConfigDisableAllPOI() {
}

void UAIPointOfInterestConfig::BuildPOIConfig(FVector _WorldLocation, UPointOfInterestConfig_DataAsset* _PointOfInterestConfig_DataAsset, UPointOfInterest_DataAsset* poi_dataAsset) {
}

void UAIPointOfInterestConfig::AddContainer(UAIPointOfInterestContainer* _Container) {
}


