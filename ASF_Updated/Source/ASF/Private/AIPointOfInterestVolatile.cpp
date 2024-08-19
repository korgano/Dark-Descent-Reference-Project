#include "AIPointOfInterestVolatile.h"

UAIPointOfInterestVolatile::UAIPointOfInterestVolatile() {
    this->bIsEnable = false;
    this->ExpirationTime = 0.00f;
    this->SaveResult = false;
    this->bHasDataModifier = false;
    this->bCanBeMultiThreaded = true;
    this->Owner = NULL;
    this->Source = NULL;
    this->PointOfInterestConfig = NULL;
    this->POIDataAsset = NULL;
}

void UAIPointOfInterestVolatile::UpdateDataBinder_Collection() {
}

void UAIPointOfInterestVolatile::TryCallPerceptionSenseUpdated(UPOIDefaultContainer* _PerceptionResult) {
}

void UAIPointOfInterestVolatile::SetPointOfInterestConfig(UAIPointOfInterestConfig* _PointOfInterestConfig) {
}

void UAIPointOfInterestVolatile::SetOwner(UObject* _Owner) {
}

void UAIPointOfInterestVolatile::SetLocation(FVector _NewLocation) {
}

void UAIPointOfInterestVolatile::SetExpirationTime(float _ExpirationTime) {
}

void UAIPointOfInterestVolatile::SetDataAsset(UPointOfInterest_DataAsset* _POIDataAsset) {
}

void UAIPointOfInterestVolatile::OnTindaWorldTimeInitialized(AGameStateBase* GameState, float Value) {
}

bool UAIPointOfInterestVolatile::IsTaggedBy(const FGameplayTagContainer& _Categories) {
    return false;
}

bool UAIPointOfInterestVolatile::IsPOIEnable() const {
    return false;
}

bool UAIPointOfInterestVolatile::IsInteresting_int(UAIPointOfInterestVolatile* _InterestPoint, FStructPOIResultData& _InResultData, float& _InterestWeight) {
    return false;
}

bool UAIPointOfInterestVolatile::IsInteresting(UAIPointOfInterestVolatile* _InterestPoint, FStructPOIResultData& _InResultData, float& _InterestWeight) {
    return false;
}

void UAIPointOfInterestVolatile::InitPOI(UObject* _Owner, FVector _WorldLocation, FStructDataCollection_Ptr _DataCollection_Ptr) {
}

UObject* UAIPointOfInterestVolatile::GetSource() const {
    return NULL;
}

bool UAIPointOfInterestVolatile::GetSaveResult() const {
    return false;
}

UAIPointOfInterestConfig* UAIPointOfInterestVolatile::GetPointOfInterestConfig() const {
    return NULL;
}

UObject* UAIPointOfInterestVolatile::GetOwner() const {
    return NULL;
}

UObject* UAIPointOfInterestVolatile::GetObject() {
    return NULL;
}

float UAIPointOfInterestVolatile::GetMapedFilterValue(FGameplayTag FilterTag) const {
    return 0.0f;
}

FVector UAIPointOfInterestVolatile::GetLocation() const {
    return FVector{};
}

bool UAIPointOfInterestVolatile::GetHasDataModifier() const {
    return false;
}

float UAIPointOfInterestVolatile::GetExpirationTime() const {
    return 0.0f;
}

float UAIPointOfInterestVolatile::GetEnabledTime() const {
    return 0.0f;
}

UPointOfInterest_DataAsset* UAIPointOfInterestVolatile::GetDataAsset() {
    return NULL;
}

bool UAIPointOfInterestVolatile::GetCanBeMultiThreaded() const {
    return false;
}

void UAIPointOfInterestVolatile::EnablePOI(UObject* _Source) {
}

void UAIPointOfInterestVolatile::DisablePOI() {
}

bool UAIPointOfInterestVolatile::CanBeInterested() {
    return false;
}


