#include "TindaAITask_MoveTo.h"
#include "Templates/SubclassOf.h"

/*UTindaAITask_MoveTo::UTindaAITask_MoveTo() {
    this->Finished = false;
}*/

UAITask_MoveTo* UTindaAITask_MoveTo::Tinda_AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation, TSubclassOf<UNavigationQueryFilter> NavigationQueryFilter) {
    return NULL;
}

void UTindaAITask_MoveTo::RequestFinished() {
}

void UTindaAITask_MoveTo::MoveIsCloseToFinish() {
}


