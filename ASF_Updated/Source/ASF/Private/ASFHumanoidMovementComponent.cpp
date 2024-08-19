#include "ASFHumanoidMovementComponent.h"

UASFHumanoidMovementComponent::UASFHumanoidMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimationComponent = NULL;
    this->DestinationActor = NULL;
    this->bMoveToALocation = false;
    this->CurrentStepMove = NULL;
    this->MoveToTask = NULL;
}

bool UASFHumanoidMovementComponent::ShouldDisplayPath() {
    return false;
}

bool UASFHumanoidMovementComponent::IsMoveTaskOngoing() {
    return false;
}

void UASFHumanoidMovementComponent::InitHumanoidMove(UActionStep_Move* ActionStep_Move, TArray<FVector>& _MovePoints) {
}

TArray<FPathSegement> UASFHumanoidMovementComponent::GetNextDestinationPoints(int32 _MaxSegment, bool _ConsiderSimpleMoves) {
    return TArray<FPathSegement>();
}

FVector UASFHumanoidMovementComponent::GetMoveDirection() const {
    return FVector{};
}

void UASFHumanoidMovementComponent::EndMove() {
}

void UASFHumanoidMovementComponent::DisplayPath() {
}


