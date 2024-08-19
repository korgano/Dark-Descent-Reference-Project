#include "CoveredAreaManagerComponent.h"

UCoveredAreaManagerComponent::UCoveredAreaManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SectorNumber = 6;
}

void UCoveredAreaManagerComponent::RemoveWeightToDirection(FVector2D Direction, UTargetableObjectData* Target) {
}

void UCoveredAreaManagerComponent::Init() {
}

TArray<float> UCoveredAreaManagerComponent::GetWeightPerSegment(FVector Origine, const TArray<FFOVSegmentVision>& SegmentVisionArray) {
    return TArray<float>();
}

float UCoveredAreaManagerComponent::GetWeightForDirection(FVector2D Direction) const {
    return 0.0f;
}

int32 UCoveredAreaManagerComponent::GetSectorNbr() const {
    return 0;
}

int32 UCoveredAreaManagerComponent::GetFirstValideSegmentIndex(FVector Origine, const TArray<FFOVSegmentVision>& SegmentVisionArray, float Threshold) {
    return 0;
}

float UCoveredAreaManagerComponent::GetAnglePerSector() const {
    return 0.0f;
}

void UCoveredAreaManagerComponent::AddWeightToDirection(FVector2D Direction, UTargetableObjectData* Target) {
}


