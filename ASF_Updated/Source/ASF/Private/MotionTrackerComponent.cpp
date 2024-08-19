#include "MotionTrackerComponent.h"

UMotionTrackerComponent::UMotionTrackerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MotionTracker_DataAsset = NULL;
}

bool UMotionTrackerComponent::MotionTrackerIsActive() const {
    return false;
}

bool UMotionTrackerComponent::IsLocationInRange(const FVector& Location) const {
    return false;
}

bool UMotionTrackerComponent::IsActorInRange(const AActor* Actor) const {
    return false;
}

bool UMotionTrackerComponent::GetIsPulsing() const {
    return false;
}

TArray<UTrackedComponent*> UMotionTrackerComponent::GetCurrentTrackedComponents(bool bWithoutPulsation) const {
    return TArray<UTrackedComponent*>();
}

void UMotionTrackerComponent::DeactivateMotionTracker() {
}

void UMotionTrackerComponent::ActivateMotionTracker() {
}


