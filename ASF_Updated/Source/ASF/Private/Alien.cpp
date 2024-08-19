#include "Alien.h"
#include "AIActionComponent.h"
#include "AIPerceptionListenerComponent.h"
#include "ASFAlienMovementComponent.h"
#include "AlienCoverComponent.h"
#include "AlienStatComponent.h"
#include "AnimationComponentAlien.h"
#include "AttackComponent.h"

AAlien::AAlien(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UASFAlienMovementComponent>(TEXT("CharMoveComp"))) {
    this->CoverComponent = CreateDefaultSubobject<UAlienCoverComponent>(TEXT("CoverComponent"));
    this->StatComponent = CreateDefaultSubobject<UAlienStatComponent>(TEXT("AlienStatComponent"));
    this->AnimationComponent = CreateDefaultSubobject<UAnimationComponentAlien>(TEXT("AnimationComponent"));
    this->AlienCenterHeigth = 0.00f;
    this->bHasBeenFiredAt = NULL;
    this->bIsTracking = false;
    this->EvadePoint = NULL;
    this->StasisPoint = NULL;
    this->OnSpawnForcedState = EnumAiState::NONE;
    this->TrackingPrecision = 0;
    this->AIPerceptionListenerComponent = CreateDefaultSubobject<UAIPerceptionListenerComponent>(TEXT("PerceptionComponent"));
    this->EnemyTargetingComponent = NULL;
    this->AttackComponent = CreateDefaultSubobject<UAttackComponent>(TEXT("AttackComponent"));
    this->AIActionComponent = CreateDefaultSubobject<UAIActionComponent>(TEXT("AIActionComponent"));
    this->DataAsset = NULL;
    this->MobilityEffect = NULL;
    this->StateEffect = NULL;
    this->RotationEffect = NULL;
    this->AlienRoomGraphFilter = NULL;
    this->SavedAIState = EnumAiState::NONE;
    this->newDelayedState = EnumAiState::NONE;
    this->bDoOnce = true;
    this->FOWVisibilityComp = NULL;
    this->EnableSkeletalOptim = true;
    this->bPlaySpawnAcknow = false;
}

void AAlien::TriggerEncounterPhase() {
}

void AAlien::TestWallRide_Implementation(FVector WallRideEnd) {
}

void AAlien::SetSpawnWithAnimation(bool SpawnWithAnimation) {
}


void AAlien::SetPlaySpawnAcknow(bool bPlay) {
}



bool AAlien::RotateDirection(FVector _Direction) {
    return false;
}

void AAlien::OnWounded_Evade(AActor* _ActorWounded, const FDamageResultStruct& _Damage) {
}

void AAlien::OnWounded(AActor* _ActorWounded, const FDamageResultStruct& _Damage) {
}

void AAlien::OnTransitionEnded() {
}

void AAlien::OnTindaWorldTimeInitialized(AGameStateBase* GameState, float Value) {
}

void AAlien::OnTargetDestroyed(AASFCharacter* killedActor) {
}

void AAlien::OnSystemicActivatedOnEventSystem(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic) {
}

void AAlien::OnSpawningAnimStop() {
}

void AAlien::OnSpawningAnimStart() {
}

void AAlien::OnSelfDeath(AASFCharacter* killedActor, const FDamageResultStruct& _DamageResult) {
}

void AAlien::OnSelfDamage(AActor* ActorWounded, const FDamageResultStruct& _Struct) {
}

void AAlien::OnScriptedActionStop(UAIActionComponent* _AIActionComponent) {
}

void AAlien::OnScriptedActionStart(UAIActionComponent* _AIActionComponent, bool _ForceActionAbort, bool _ForceAnimationAbort) {
}

void AAlien::OnNoiseEvent_Implementation(UAlienSystemic* AlienSystemic, FVector _Origin, int32 GraphID) {
}

void AAlien::OnNewTarget(AAIController_Alien* AIController, AActor* OldTarget, AActor* NewTarget) {
}

void AAlien::OnNewState(AAIController_Alien* AIController, EnumAiState OldState, EnumAiState NewState) {
}

void AAlien::OnLocomotionEnable() {
}

void AAlien::OnLocomotionDisable() {
}

void AAlien::OnExecutedActionChanged(UAIActionComponent* _AIActionComponent, UAIAction* _OldAction, UAIAction* _NewAction) {
}

void AAlien::OnEventSystemSet(AASFGameModeBase_TacticalMode* GameMode, ATMEventSystem* EventSystem) {
}

void AAlien::OnAttackChanged(AASFCharacter* Character, UAttack* OldAttack, UAttack* NewAttack) {
}

void AAlien::OnAlienPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase) {
}

void AAlien::OnActionStop(UAIActionComponent* _AIActionComponent, UAIAction* _Action, EnumAIActionStatus _AIActionStatus) {
}

void AAlien::OnActionStart(UAIActionComponent* _AIActionComponent) {
}

bool AAlien::NeedSpawnAnim_Implementation() const {
    return false;
}

void AAlien::GetXenomorph_MIDs_Implementation(TArray<UMaterialInstanceDynamic*>& Mids) {
}

float AAlien::GetStateThresholdRange(EnumAiState State, bool& thresholdFound) {
    return 0.0f;
}

bool AAlien::GetSpawnXenoSample_Implementation() const {
    return false;
}

bool AAlien::GetMeshUseMIDs_Implementation() const {
    return false;
}

AAIGuardPath* AAlien::GetGuardPath() {
    return NULL;
}

UAlienClassDataAsset* AAlien::GetAlienDataAsset() const {
    return NULL;
}

EnumAiState AAlien::GetAiState() const {
    return EnumAiState::NONE;
}

bool AAlien::ForceRotate(FVector _Destination) {
    return false;
}

void AAlien::ForcePatrolPath(AAIGuardPath* PatrolPath) {
}

bool AAlien::ExecuteImpactAction(FGameplayTag _ImpactTag, float& _ImpactDuration, bool _ForceExecute) {
    return false;
}

void AAlien::EnableSkeletalRender(bool _IsEnable, USkinnedMeshComponent* _SKComp) {
}

void AAlien::DeathOrDestroy() {
}

void AAlien::ComputeNoiseEvent_Implementation(FVector _Origin, int32 GraphID) {
}

void AAlien::ChangeAnimationStateFromAIState(EnumAiState OldState, EnumAiState NewState) {
}

void AAlien::ChangeAnimationState(EnumAlienAnimPhase newAnimState) {
}

bool AAlien::CanTriggerEncounterPhase() {
    return false;
}


