#include "AnimInstanceCharacter.h"

UAnimInstanceCharacter::UAnimInstanceCharacter() {
    this->bIsDead = false;
    this->IsSequencer = false;
    this->FadeInSequencerTime = 0.20f;
    this->FadeOutSequencerTime = 0.20f;
    this->FadeOutSequencerTimeDelayed2Frames = 0.20f;
    this->RotateInPlaceMontage = NULL;
    this->bIsMoving = false;
    this->bIsRunning = false;
    this->fSpeed = 0.00f;
    this->fRunSpeed = 350.00f;
    this->fMoveDirectionAngle = 0.00f;
    this->fPlayRateLocomotion = 0.00f;
    this->bIsInStopAnim = false;
    this->bStopRun = false;
    this->bPlayStopAnim = false;
    this->bCancelStopAnim = false;
    this->bRightFootFront = false;
    this->PelvisBoneForRootmotionCurve = TEXT("Pelvis_jnt_MovementSpeed");
    this->bIsInIdle = false;
    this->fTimerLastIdle = 0.00f;
    this->CurrentIdle = NULL;
    this->bIsInRagdoll = false;
    this->bIsInProjectionRagdoll = false;
    this->DraggingState = EnumCharacterDraggingState::NONE;
    this->bIsAbducting = false;
    this->GraberCharacter = NULL;
    this->fGrabMoveTimer = 0.00f;
    this->fCurrentGrabMoveTimer = 0.00f;
    this->bIsAttachedToGraber = false;
    this->fDropAnimScale = 1.00f;
    this->AnimGrabDrop = NULL;
    this->bTakeDamage = false;
    this->AnimTakeDamage = NULL;
    this->BlendWeight = 0.00f;
}

void UAnimInstanceCharacter::UnblockMovement_Implementation() {
}

void UAnimInstanceCharacter::ToggleRagdoll(bool IsRagdoll, bool IsInProjectionRagdoll) {
}

void UAnimInstanceCharacter::TickRootmotionMove_Implementation(float FrameDeltaTime) {
}

void UAnimInstanceCharacter::TickRagdoll(float DeltaSeconds) {
}

void UAnimInstanceCharacter::TickLocomotion(float fDeltaTime) {
}

void UAnimInstanceCharacter::TickIdles(float DeltaSeconds) {
}

void UAnimInstanceCharacter::TickGraber(float fDeltaSeconds) {
}

void UAnimInstanceCharacter::TickClothingSimulation(float fDeltaSeconds) {
}

void UAnimInstanceCharacter::StopTakeDamageAnim() {
}

void UAnimInstanceCharacter::StopMove_Implementation(bool WasRuning) {
}

void UAnimInstanceCharacter::StopAnimFinished() {
}

void UAnimInstanceCharacter::StartRootmotionMove_Implementation(float TotalDuration) {
}

void UAnimInstanceCharacter::StandUpFromRagdoll_Implementation(bool PlayAnimation, bool FromFront) {
}

void UAnimInstanceCharacter::SetDraggingState_Implementation(EnumCharacterDraggingState NewDraggingState, AASFCharacter* OtherCharacter, bool _NoAnimation) {
}

void UAnimInstanceCharacter::SetClothingSimulationWeight(float Weight) {
}

void UAnimInstanceCharacter::SetClothingSimulation(bool EnableClothSimulation) {
}

void UAnimInstanceCharacter::SetBodyLocation(FName BoneName, FVector Location) {
}

void UAnimInstanceCharacter::SetAnimationReady_Implementation() {
}

void UAnimInstanceCharacter::SetAnimationNotReady_Implementation(const FString& BlockFrom) {
}

void UAnimInstanceCharacter::RotateInPlaceStart() {
}

void UAnimInstanceCharacter::RotateInPlaceEnd() {
}

void UAnimInstanceCharacter::PlayIdle() {
}

void UAnimInstanceCharacter::OnRotateInPlace_Implementation(FRotateInPlace Param) {
}

void UAnimInstanceCharacter::OnMoveStart(bool IsRunningMove, bool WasRuning, float Angle) {
}

void UAnimInstanceCharacter::OnDeath_Implementation(AASFCharacter* ActorKilled, const FDamageResultStruct& DamageResult) {
}

void UAnimInstanceCharacter::OnDamageTaken_Implementation(AActor* Actor, FGameplayTag BodyPartHit, EnumAlienAttackSide AttackSide) {
}

void UAnimInstanceCharacter::MontageStopped_Implementation(UAnimMontage* Montage) {
}

bool UAnimInstanceCharacter::MontageIsPlayingNow() const {
    return false;
}

bool UAnimInstanceCharacter::IsRightFootInFront() const {
    return false;
}

bool UAnimInstanceCharacter::IsMoving_Implementation() const {
    return false;
}

bool UAnimInstanceCharacter::IsDead() const {
    return false;
}

FVector UAnimInstanceCharacter::GetWeldingLocation_Implementation() const {
    return FVector{};
}

float UAnimInstanceCharacter::GetTimeBeforeHittingTheGround_Implementation() {
    return 0.0f;
}

float UAnimInstanceCharacter::GetSpeedAnimScale_Implementation() const {
    return 0.0f;
}


FVector UAnimInstanceCharacter::GetRealForward_Implementation() const {
    return FVector{};
}

UPhysicalReactionComponent* UAnimInstanceCharacter::GetPhysicalReactionComponent() const {
    return NULL;
}

FName UAnimInstanceCharacter::GetPelvisBoneName_Implementation() const {
    return NAME_None;
}

USkeletalMeshComponent* UAnimInstanceCharacter::GetMesh() const {
    return NULL;
}

FVector UAnimInstanceCharacter::GetLocationToAimAtMe_Implementation() const {
    return FVector{};
}

EnumAlienAttackSide UAnimInstanceCharacter::GetImpactSide_Implementation() {
    return EnumAlienAttackSide::FROM_FRONT;
}

FVector UAnimInstanceCharacter::GetImpactDirection_Implementation() {
    return FVector{};
}


FVector UAnimInstanceCharacter::GetHeadLocation_Implementation() const {
    return FVector{};
}

FName UAnimInstanceCharacter::GetHandItemBoneName_Implementation() const {
    return NAME_None;
}

float UAnimInstanceCharacter::GetDropAnimScale(float TimeBeforeHittingTheGround) {
    return 0.0f;
}

FVector UAnimInstanceCharacter::GetCharaVelocity() {
    return FVector{};
}

USceneComponent* UAnimInstanceCharacter::GetCharacterSceneComponent() const {
    return NULL;
}

UAnimSequenceBase* UAnimInstanceCharacter::GetAnimTakeDamage_Implementation(EnumAlienAttackSide AttackSide) {
    return NULL;
}

UAnimationComponent* UAnimInstanceCharacter::GetAnimComponent() const {
    return NULL;
}

float UAnimInstanceCharacter::GetAnimationDrivenMoveDuration_Implementation() {
    return 0.0f;
}

FVector UAnimInstanceCharacter::GetAnimationDrivenMoveDestination_Implementation() {
    return FVector{};
}

FVector UAnimInstanceCharacter::GetAnimationDrivenMoveCurrentLocation_Implementation() {
    return FVector{};
}

FVector UAnimInstanceCharacter::GetActorRelativeLocation(AActor* Actor) const {
    return FVector{};
}

void UAnimInstanceCharacter::FinishIdle() {
}

void UAnimInstanceCharacter::EndRootmotionMove_Implementation() {
}

void UAnimInstanceCharacter::DetachFromGraber() {
}

void UAnimInstanceCharacter::CutCurrentIdle_Implementation() {
}

bool UAnimInstanceCharacter::CanPlayTakeDamageAnim_Implementation() {
    return false;
}

bool UAnimInstanceCharacter::CanPlayStopAnim() const {
    return false;
}

bool UAnimInstanceCharacter::CanDoAnIdle_Implementation() const {
    return false;
}

void UAnimInstanceCharacter::CancelRotateInPlace_Implementation() {
}

void UAnimInstanceCharacter::BlockMovement_Implementation() {
}

void UAnimInstanceCharacter::AttachGrabedToGraber(AASFCharacter* Graber, const FName& BoneName) {
}


