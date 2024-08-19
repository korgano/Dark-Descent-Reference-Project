#include "ASM_AISplineMovementComponent.h"
#include "Templates/SubclassOf.h"
#include "GameplayTask.h"

void UASM_AISplineMovementComponent::UpdatePath() {
}

void UASM_AISplineMovementComponent::StopMovement() {
}

void UASM_AISplineMovementComponent::SplineBasedMoveTo(const FVector Destination, AActor* TargetActor, const float AcceptanceRadius, TSubclassOf<UNavigationQueryFilter> FilterClass, const bool bAllowStrafe, const bool bStopOnOverlap, const bool bAllowPartialPath, const bool bAllowSplineRepath, const bool bTrackMovingGoal) {
}

bool UASM_AISplineMovementComponent::ShouldMove() const {
    return false;
}

void UASM_AISplineMovementComponent::OnPathUpdated(UNavigationPath* AffectedPath, TEnumAsByte<ENavPathEvent::Type> PathEvent) {
}

void UASM_AISplineMovementComponent::OnActorOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UASM_AISplineMovementComponent::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

bool UASM_AISplineMovementComponent::IsPathValide() const {
    return false;
}

bool UASM_AISplineMovementComponent::IsNavPathFound() {
    return false;
}

float UASM_AISplineMovementComponent::GetPathLength() const {
    return 0.0f;
}

float UASM_AISplineMovementComponent::GetCurrentTurnDelta() {
    return 0.0f;
}

void UASM_AISplineMovementComponent::FindNavPath(bool _Updating) {
}

bool UASM_AISplineMovementComponent::BuildSplinePath_Implementation(const TArray<FVector>& _PathPoints) {
    return false;
}

UASM_AISplineMovementComponent::UASM_AISplineMovementComponent() : Super() {
    //UASM_AISplineMovementComponent::UASM_AISplineMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = NULL;
    this->TargetActorPtr = NULL;
    this->SplineBasedMoveToNodePtr = NULL;
    this->OwningPawnPtr = NULL;
    this->AIControllerPtr = NULL;
    this->MovementComponentPtr = NULL;
    this->NavSystemPtr = NULL;
    this->NavPathPtr = NULL;
    this->NavDataPtr = NULL;
    this->DeltaDistanceToMove = 75.00f;
    this->TurnTarget_DistanceFromFirstTarget = 25.00f;
    this->MinTetherDistance = 10.00f;
    this->MaxTetherDistance = 100.00f;
    this->ObservedTargetTickInterval = 0.50f;
    this->bUsePathfindingWhileMoving = false;
    this->bEnableDebug = false;
    this->DebugMesh = NULL;
    this->DebugMeshMaterial = NULL;
}