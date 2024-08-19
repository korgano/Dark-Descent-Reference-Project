#include "PlayerSquad.h"
#include "MotionTrackerState.h"

APlayerSquad::APlayerSquad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPlayerSquad = true;
    this->MotionTrackerState = CreateDefaultSubobject<UMotionTrackerState>(TEXT("MotionTrackerState"));
    this->InactivityTimerDuration = 30.00f;
    this->bUnderCover = false;
    this->bEnemyCloseState = false;
    this->PerceptionEnemyCloseUpdateRate = 1.00f;
    this->ObjectiveCompletedCount = 0;
}

void APlayerSquad::StartInactivityTimer() {
}

void APlayerSquad::ResetInactivityTimer() {
}

void APlayerSquad::PerceptionEnemyCloseSwitch(bool bActivate) {
}

void APlayerSquad::OnUpdatePerceptionEnemyClose() {
}

void APlayerSquad::OnSquadMemberWeaponFired(AHumanoid* _Character, AWeapon* _Weapon) {
}

void APlayerSquad::OnSquadMemberActivityEnded(UActivity* _Activity) {
}

void APlayerSquad::OnSquadMemberActivityAdded(UActivity* _Activity) {
}

void APlayerSquad::OnSquadMemberActionsCleared(UHumanoidActionManager* _ActionManager) {
}

void APlayerSquad::OnSquadMemberActionRemoved(UHumanoidActionManager* _ActionManager, UAction* _Action) {
}

void APlayerSquad::OnSquadMemberActionAdded(UHumanoidActionManager* _ActionManager, UAction* _Action) {
}

void APlayerSquad::OnSkillFeatureUnlocked(FGameplayTag _SkillTag) {
}

void APlayerSquad::OnPlayerMemberUndercoverCrouch(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _Effect, bool _bAdded) {
}

void APlayerSquad::OnPlayerMemberUndercoverChanged(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _Effect, bool _bAdded) {
}

void APlayerSquad::OnInactivityTimerEnded() {
}

int32 APlayerSquad::GetXPGained() {
    return 0;
}

int32 APlayerSquad::GetObjectiveCompletedCount() const {
    return 0;
}

void APlayerSquad::GetDynamicSkillFromMission(AASFGameState_TacticalMode* GameState, AMission* Mission) {
}

void APlayerSquad::BroadcastNoiseEmission(UObject* WorldContextObject, APlayerSquad* PlayerSquad, AActor* NoiseInstigator) {
}

void APlayerSquad::AddToXpGained(int32 _XpGained, FGameplayTag _XpType, const FString& _Name) {
}

void APlayerSquad::AddToObjectiveCompletedCount() {
}

void APlayerSquad::AddCommandPoint(float _Amount) {
}


