#include "ASFCharacterMovementComponent.h"
#include "Templates/SubclassOf.h"

UASFCharacterMovementComponent::UASFCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWantASFPriorityRotation = false;
    this->bRotate = false;
    this->bWasRunning = false;
    this->bSlideToDest = false;
    this->SlidingEnable = false;
    this->DistRatioBase = 100.00f;
    this->SlidingMinRatio = 0.30f;
    this->SlidingMaxRatio = 1.00f;
    this->MinDistToUseRootMotion = 150.00f;
    this->MinAngleToUseRootMotion = 45.00f;
    this->IsJumping = false;
    this->isAnimationMovementDriven = false;
    this->isWallRiding = false;
    this->GravityScaleSaved = 0.00f;
    this->bProceedMove = false;
    this->GoalActor = NULL;
    this->AcceptRadius = 0.00f;
    this->bLockAILogic = false;
    this->RestartMove = false;
    this->WaitingForStartMoveAnimation = false;
    this->StartAnimUsed = false;
    this->bPathBuild = false;
    this->IsRotationLocked = false;
    this->AIController = NULL;
    this->StuckCpt = 0;
    this->StuckTickTime = 0.50f;
    this->MaxAuthorizedTimeStuck = 1.00f;
    this->UnstuckEnable = false;
    this->CrowdManagerDisable = false;
}

void UASFCharacterMovementComponent::UpdateWallRide() {
}

void UASFCharacterMovementComponent::UpdateJump(FVector JumpOrigin, FVector JumpDestination, float JumpDuration, float JumpTopHeight, UCurveFloat* JumpCurve, UCurveFloat* _DriftCurve, float _DriftMultiplier, float JumpAlpha, UCurveFloat* _SpeedCurve) {
}

void UASFCharacterMovementComponent::UpdateAnimationMovementDriven(FVector MovementEnd, float _Speed) {
}

void UASFCharacterMovementComponent::TryMove(AAIController* Controller, FVector GoalLocation, AActor* _GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool _bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation, TSubclassOf<UNavigationQueryFilter> NavigationQueryFilter) {
}

bool UASFCharacterMovementComponent::TaskWallRide(FVector MovementEnd) {
    return false;
}

bool UASFCharacterMovementComponent::TaskJump(FVector _Destination, AActor* _ActorDestination, FVector _Origin, float _Speed, UCurveFloat* _HeightCurve, UCurveFloat* _DriftCurve, float _DriftMultiplier, float _JumpAngle, UCurveFloat* _SpeedCurve) {
    return false;
}

bool UASFCharacterMovementComponent::TaskAnimationMovementDriven(float _Speed, FVector MovementEnd) {
    return false;
}

void UASFCharacterMovementComponent::StopSplineFollow() {
}

void UASFCharacterMovementComponent::StartUnStuckCheck() {
}

void UASFCharacterMovementComponent::StartSplineFollow(float _Velocitiy) {
}

void UASFCharacterMovementComponent::SplineMoveEnded(TEnumAsByte<EPathFollowingResult::Type> _Status) {
}

void UASFCharacterMovementComponent::SlidingToDest(TEnumAsByte<EPathFollowingResult::Type> _Status) {
}

void UASFCharacterMovementComponent::RotationEnd() {
}

void UASFCharacterMovementComponent::ResetUnstuckCheck() {
}

void UASFCharacterMovementComponent::OnWallRideOver() {
}

void UASFCharacterMovementComponent::OnPathBuild(UASF_AISplineMovementComponent* ASF_AISplineMovementComponent, UNavigationPath* NavigationPath) {
}

void UASFCharacterMovementComponent::OnMovementFailed(TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}

void UASFCharacterMovementComponent::OnJumpOver(UASFCharacterMovementComponent* _MovementComponent) {
}

void UASFCharacterMovementComponent::OnAnimationMovementDrivenOver() {
}

void UASFCharacterMovementComponent::MoveTo() {
}

FVector UASFCharacterMovementComponent::MovePointWider(UObject* WorldObj, TArray<FVector>& _PathPoints, const int32 _CurrentIdx, const TSubclassOf<UNavigationQueryFilter> FilterClass, const float Width, const bool _Debug) {
    return FVector{};
}

void UASFCharacterMovementComponent::MovementCompleted(TEnumAsByte<EPathFollowingResult::Type> _Status) {
}

void UASFCharacterMovementComponent::LockRotation(bool _IsLocked) {
}

void UASFCharacterMovementComponent::IsStuck() {
}

bool UASFCharacterMovementComponent::IsNavigationReady(UObject* _Context) {
    return false;
}

bool UASFCharacterMovementComponent::IsMoving() {
    return false;
}

bool UASFCharacterMovementComponent::IsFollowingSpline() const {
    return false;
}

bool UASFCharacterMovementComponent::HasReachedDestination() {
    return false;
}

float UASFCharacterMovementComponent::GetSplineFollowVelocity() const {
    return 0.0f;
}

FVector UASFCharacterMovementComponent::GetMoveDestination() {
    return FVector{};
}

FVector UASFCharacterMovementComponent::GetLocationToLookAt() {
    return FVector{};
}

AASFCharacterAIController* UASFCharacterMovementComponent::GetAIController() {
    return NULL;
}

void UASFCharacterMovementComponent::EndUnstuckCheck() {
}

void UASFCharacterMovementComponent::EnableUnstuckCheck() {
}

void UASFCharacterMovementComponent::DisableUnstuckCheck() {
}

void UASFCharacterMovementComponent::BuildPath() {
}

void UASFCharacterMovementComponent::AskForReOrientation(FVector _LookAtDirection, float Angle) {
}

void UASFCharacterMovementComponent::AnimStartMoveTo() {
}

void UASFCharacterMovementComponent::AnimRotationEnd(UASFCharacterMovementComponent* CharacterMovementComponent) {
}

void UASFCharacterMovementComponent::AnimationIsReady(UObject* BlendingObject) {
}


