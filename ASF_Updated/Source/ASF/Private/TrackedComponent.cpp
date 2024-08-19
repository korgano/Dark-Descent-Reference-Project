#include "TrackedComponent.h"

UTrackedComponent::UTrackedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Bleep = NULL;
    this->DiplomacyWithLeader = EDiplomacy::ENNEMY;
    this->bHasMoved = false;
    this->bIsOwnerVisible = true;
}

void UTrackedComponent::UpdateTrackedComponent() {
}

bool UTrackedComponent::IsInMotionTrackerRange() const {
    return false;
}

bool UTrackedComponent::HasMoveRecently() {
    return false;
}

FVector UTrackedComponent::GetLocation() const {
    return FVector{};
}


