#include "ASF_AISplineMovementComponent.h"

//UASF_AISplineMovementComponent::UASF_AISplineMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
UASF_AISplineMovementComponent::UASF_AISplineMovementComponent() : Super() {
    this->Updating = false;
    this->SplineReachDistance = 500.00f;
    this->ReachPointNumber = 5;
    this->LastPathUpdate = 0.00f;
    this->PathUpdateTime = 1.75f;
    this->RepathBlockedTillIndex = 0;
    this->bStartMoveCanBeDelayed = false;
    this->BUseFailSafeMovement = false;
    this->MovementQueryClass = NULL;
    this->stuckTime = 0.00f;
    this->stuckTime_Threshold = 1.00f;
}

void UASF_AISplineMovementComponent::StartMove() {
}

bool UASF_AISplineMovementComponent::InjectSplinePoint(const TArray<FVector>& SplinePoint, int32 blockRepathTillIndex) {
    return false;
}

AActor* UASF_AISplineMovementComponent::GetTargetActor() const {
    return NULL;
}

AActor* UASF_AISplineMovementComponent::GetSplineMovableActorData() {
    return NULL;
}

USplineComponent* UASF_AISplineMovementComponent::GetSplineComponent() const {
    return NULL;
}

int32 UASF_AISplineMovementComponent::GetNextSplinePointId() {
    return 0;
}

UNavigationPath* UASF_AISplineMovementComponent::GetNavPathPtr() const {
    return NULL;
}

float UASF_AISplineMovementComponent::GetDistToNextTurn(float _minAnle) {
    return 0.0f;
}

float UASF_AISplineMovementComponent::GetCurrentDistanceAlongSpline() {
    return 0.0f;
}

void UASF_AISplineMovementComponent::FindNavPath_External(bool _Updating) {
}

void UASF_AISplineMovementComponent::ClearSpline() {
}

void UASF_AISplineMovementComponent::CleanPathFromStraightPathPoints(TArray<FVector>& _SourcePathPoints, TArray<FVector>& _NewPathPoints) {
}

void UASF_AISplineMovementComponent::CleanPathFromDoor(AASFCharacter* _Chara, TArray<FVector>& _SourcePathPoints, TArray<FVector>& _NewPathPoints) {
}

bool UASF_AISplineMovementComponent::CanRepath() {
    return false;
}

TArray<FVector> UASF_AISplineMovementComponent::AlterPath_Implementation() {
    return TArray<FVector>();
}


