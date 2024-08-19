#include "TrackingSystemComponent.h"

UTrackingSystemComponent::UTrackingSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MotionTracker_DataAsset = NULL;
}

void UTrackingSystemComponent::UnregisterMotionTracker(UMotionTrackerComponent* _MotionTrackerToUnregister) {
}

void UTrackingSystemComponent::UnlockScan() {
}

void UTrackingSystemComponent::RegisterMotionTracker(UMotionTrackerComponent* _MotionTrackerToRegister) {
}

void UTrackingSystemComponent::LockScan() {
}

bool UTrackingSystemComponent::IsLocked() {
    return false;
}

int32 UTrackingSystemComponent::CountMovingTrackedComponentByDiplomacyWithLeader(EDiplomacy Diplomacy) const {
    return 0;
}

void UTrackingSystemComponent::ComputeScan() {
}

void UTrackingSystemComponent::ClearScan() {
}


