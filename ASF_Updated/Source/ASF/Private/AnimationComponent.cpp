#include "AnimationComponent.h"

UAnimationComponent::UAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimStance = EnumCharacterAnimStance::STANDING;
    this->IsLeftHanded = false;
    this->ActivateRootMotionRotation = true;
    this->ActivateRotateInPlace = false;
    this->IsRotating = true;
    this->DismemberState = EnumDismemberedState::NONE;
    this->DefaultGamePawn = NULL;
    this->bIsBlendingAnimationReady = true;
    this->bAnimIsTicking = false;
    this->AnimationDrivenSystem = true;
    this->DegugCameraClass = NULL;
    this->DebugCamera = NULL;
    this->DebugFastStartDestination = false;
}

void UAnimationComponent::TakeDamage(AActor* DamageGiver, FGameplayTag BodyPartHit, EnumAlienAttackSide AttackSide) {
}

void UAnimationComponent::StartAnimationDrivenMove(FGameplayTag MoveTag) {
}

void UAnimationComponent::StartActivityAnimation(UActivity* _Activity) {
}

void UAnimationComponent::SetVisibilityBasedAnimTickOption(bool IsTicking) {
}

void UAnimationComponent::SetDraggingState(EnumCharacterDraggingState DraggingState, AASFCharacter* OtherCharacter, bool _NoAnimation) {
}

UCycleAnimation* UAnimationComponent::SetCycleAnims(UAnimSequence* StartAnim, UAnimSequence* LoopAnim, UAnimSequence* StopAnim, float StartAtStopAnim) {
    return NULL;
}

void UAnimationComponent::SetBlendingAnimationReady(bool bIsReady) {
}

void UAnimationComponent::SetAttackChoreography(EnumAlienAttackType AttackType, AASFCharacter* OtherCharacter, FVector Destination) {
}

void UAnimationComponent::SetAnimStance(EnumCharacterAnimStance NewAnimStance) {
}

void UAnimationComponent::SendEndActivity(UActivity* _Activity, bool _bIsPause) {
}

void UAnimationComponent::RotateInPlaceFinished() {
}

void UAnimationComponent::RotateInPlace(UASFCharacterMovementComponent* MovementComponent, bool _bRootMotion, float _Angle) {
}

void UAnimationComponent::RemoveBodypartMeshFromMainMesh(USkeletalMeshComponent* MainMesh, USkeletalMeshComponent* BodypartMesh) {
}

int32 UAnimationComponent::RemoveAllMeshParts(USkeletalMeshComponent* MainMesh) {
    return 0;
}

void UAnimationComponent::PossessDebugCamera(bool IsDebug) {
}

void UAnimationComponent::PlayDeathAnimation(EnumAlienDeathType DeathType) {
}

void UAnimationComponent::OnDismemberMesh(UPhysicalReactionComponent* PhysicalReactionComp, FName BoneName) {
}

void UAnimationComponent::OnActionState_Stop(FGameplayTag ActionStateTag) {
}

void UAnimationComponent::OnActionState_Start(FGameplayTag ActionStateTag) {
}

void UAnimationComponent::MoveStart(UASFCharacterMovementComponent* MovementComponent, bool _bRunning, bool _bWasRunning, float _Angle) {
}

void UAnimationComponent::LaunchAttack(AActor* ThingAttacked, FGameplayTag AttackTag) {
}

bool UAnimationComponent::IsBlendingAnimationReady() const {
    return false;
}

float UAnimationComponent::GetTimeUntilNextNotify(USkeletalMeshComponent* Mesh, FName Notify) {
    return 0.0f;
}

float UAnimationComponent::GetTimeBetweenNotify(UAnimSequenceBase* Anim, FName Notify1, FName Notify2) {
    return 0.0f;
}

FName UAnimationComponent::GetSocketWeaponEquiped(FName NameSocketWeaponEquiped) const {
    return NAME_None;
}

UPhysicalReactionComponent* UAnimationComponent::GetPhysicalReactionComponent() const {
    return NULL;
}

float UAnimationComponent::GetMontageTimeBlendIn(UAnimMontage* AnimMontage) {
    return 0.0f;
}

float UAnimationComponent::GetCurveValueAtTime(UAnimSequenceBase* Anim, FName CurveName, float Time) {
    return 0.0f;
}

float UAnimationComponent::GetBlendSpace1DTime(UBlendSpaceBase* BS, float AxisValue) {
    return 0.0f;
}

bool UAnimationComponent::GetAnimIsTicking() const {
    return false;
}

float UAnimationComponent::GetAnimationDrivenMoveDuration() {
    return 0.0f;
}

FVector UAnimationComponent::GetAnimationDrivenMoveDestination() {
    return FVector{};
}

FVector UAnimationComponent::GetAnimationDrivenMoveCurrentLocation() {
    return FVector{};
}

void UAnimationComponent::EndAnimationDrivenMove() {
}

void UAnimationComponent::EndActivityAnimation(UActivity* _Activity) {
}

void UAnimationComponent::DetachFromGraber() {
}

void UAnimationComponent::ChangeDismemberState(EnumDismemberedState NewDismemberState) {
}

void UAnimationComponent::ChangeConstraintProjectionState(bool Activate) {
}

bool UAnimationComponent::CanRotate() {
    return false;
}

void UAnimationComponent::CancelRotateInPlace() {
}

void UAnimationComponent::CancelAttackAnim() {
}

void UAnimationComponent::BulletDamagesActivation(bool Activate) {
}

void UAnimationComponent::BuildMeshFromPDA(USkeletalMeshComponent* MainMesh, UMarineClassDataAssets* DataAsset, EGender Gender) {
}

void UAnimationComponent::AttachGrabedToGraber(AASFCharacter* Graber, const FName& BoneName) {
}

bool UAnimationComponent::AnimIsTicking() const {
    return false;
}

USkeletalMeshComponent* UAnimationComponent::AddBodypartMeshToMainMesh(USkeletalMeshComponent* MainMesh, USkeletalMesh* NewBodyPart) {
    return NULL;
}


