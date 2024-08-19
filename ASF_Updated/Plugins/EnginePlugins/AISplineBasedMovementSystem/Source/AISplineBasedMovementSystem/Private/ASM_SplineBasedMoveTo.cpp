#include "ASM_SplineBasedMoveTo.h"
#include "Templates/SubclassOf.h"
//#include "GameplayTask.h"

UASM_SplineBasedMoveTo::UASM_SplineBasedMoveTo() {
    this->AISplineMovementComponentPtr = NULL;
    this->TargetActorPtr = NULL;
}

UASM_SplineBasedMoveTo* UASM_SplineBasedMoveTo::SplineBasedMoveTo(UObject* WorldContextObject, UASM_AISplineMovementComponent* SplineMovementComponent, const FVector Destination, AActor* TargetActor, const float AcceptanceRadius, TSubclassOf<UNavigationQueryFilter> FilterClass, const bool bAllowStrafe, const bool bStopOnOverlap, const bool bAllowPartialPath, const bool bAllowSplineRepath, const bool bTrackMovingGoal) {
    return NULL;
}

void UASM_SplineBasedMoveTo::OnMovementSucceeded(TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}

void UASM_SplineBasedMoveTo::OnMovementFailed(TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}


