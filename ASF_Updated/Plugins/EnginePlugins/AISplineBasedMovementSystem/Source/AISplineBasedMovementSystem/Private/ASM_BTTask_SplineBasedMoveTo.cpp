#include "ASM_BTTask_SplineBasedMoveTo.h"
#include "GameplayTask.h"

UASM_BTTask_SplineBasedMoveTo::UASM_BTTask_SplineBasedMoveTo() {
    this->NodeName = TEXT("Spline-Based Move To");
    this->OwnerCompPtr = NULL;
    this->AIController = NULL;
    this->AISplineMovementComponentPtr = NULL;
    this->AcceptableRadius = 5.00f;
    this->FilterClass = NULL;
    this->bAllowStrafe = false;
    this->bStopOnOverlap = true;
    this->bAllowPartialPath = true;
    this->bAllowSplineRepath = true;
    this->bTrackMovingGoal = true;
}

void UASM_BTTask_SplineBasedMoveTo::OnMovementSucceeded(TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}

void UASM_BTTask_SplineBasedMoveTo::OnMovementFailed(TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}


