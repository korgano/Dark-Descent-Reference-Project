#include "ASFAlienMovementComponent.h"

UASFAlienMovementComponent::UASFAlienMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSmoothMove = false;
    this->CurrentIdMovePoints = 0;
    this->SpaceWithDestinationActor = 0.00f;
    this->AlienController = NULL;
}

void UASFAlienMovementComponent::Turning(float Angle, float Delay) {
}

void UASFAlienMovementComponent::SetPathPoints(const TArray<FVector>& NewPathPoints) {
}

void UASFAlienMovementComponent::SetMovePoints(const TArray<FVector>& _MovePoints) {
}

TArray<FVector> UASFAlienMovementComponent::GetPathPoints() {
    return TArray<FVector>();
}

TArray<FVector> UASFAlienMovementComponent::GetMovePoints() {
    return TArray<FVector>();
}

void UASFAlienMovementComponent::EnableSmoothMove(const TArray<FVector>& _MovePoints) {
}

void UASFAlienMovementComponent::DisableSmoothMove() {
}


