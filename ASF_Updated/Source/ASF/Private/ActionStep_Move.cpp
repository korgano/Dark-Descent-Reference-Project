#include "ActionStep_Move.h"
#include "Templates/SubclassOf.h"

UActionStep_Move::UActionStep_Move() {
    this->bCanSetOverwatch = true;
    this->SpacingFromObstacles = 75.00f;
    this->bUseFormationAlong = false;
    this->bUseFormationAtEnd = false;
    this->bClearPathFromStraightPoints = true;
    this->bClearPathFromDoorsPoints = true;
    this->Debug = false;
    this->RunningEffect = NULL;
    this->WalkingEffect = NULL;
    this->IsEnding = false;
    this->AcceptanceRadius = 0.00f;
}

void UActionStep_Move::SetWalking() {
}

void UActionStep_Move::RemoveWalking() {
}

//void UActionStep_Move::MoveCompleted_Implementation(UASFCharacterMovementComponent* _ASFCharacterMovementComponent, TEnumAsByte<EPathFollowingResult::Type> Result) {}


bool UActionStep_Move::IsMoveing() {
    return false;
}

//void UActionStep_Move::InitiateMove_Implementation(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float _AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation, TSubclassOf<UNavigationQueryFilter> NavigationQueryFilter) {}

TArray<FVector> UActionStep_Move::GetPathPositions_Implementation(FVector _Destination) {
    return TArray<FVector>();
}

FVector UActionStep_Move::GetMoveStartPosition_Implementation() {
    return FVector{};
}

void UActionStep_Move::CheckRunning() {
}

void UActionStep_Move::CalculatePath_Implementation(FVector _Destination, TArray<FVector>& Path) {
}

void UActionStep_Move::AlterPath_Implementation(TArray<FVector>& _Path, TArray<FVector>& _NewPath) {
}


