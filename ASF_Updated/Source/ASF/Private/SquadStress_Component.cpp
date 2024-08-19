#include "SquadStress_Component.h"

USquadStress_Component::USquadStress_Component(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Squad = NULL;
}

void USquadStress_Component::UpdateOnPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase) {
}

void USquadStress_Component::OnTrackingSystemRegistered(AASFGameState_TacticalMode* _GameState, UEnnemyTrackingSystem* _TrackingSystem) {
}

void USquadStress_Component::OnEnemyTrackingListChanged(UEnnemyTrackingSystem* _EnnemyTrackingSystem, AASFCharacter* _EnemyTracking) {
}

void USquadStress_Component::DoChecks() {
}

void USquadStress_Component::CheckBleepInMotionTracker() {
}

void USquadStress_Component::ApplyDisruptive(bool ApplyRemove) {
}


