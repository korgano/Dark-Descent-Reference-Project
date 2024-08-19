#include "RespawnHandlerComponent.h"

URespawnHandlerComponent::URespawnHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SubLevelHandler = NULL;
    this->MinDelayRespawn = 15.00f;
    this->MaxDelayRespawn = 30.00f;
}

TSoftClassPtr<AASFCharacter> URespawnHandlerComponent::PopRandomEnemyFromSavePatrols() {
    return NULL;
}

bool URespawnHandlerComponent::PatrolHasToSpawnForCurrentSubLevel() const {
    return false;
}

void URespawnHandlerComponent::OnSystemicActivatedOnEventSystem(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic) {
}

void URespawnHandlerComponent::OnSubLevelLoaded(ASubLevelHandler* _Handler, const FString& _StreamingLevel) {
}

void URespawnHandlerComponent::OnSubLevelBeginUnload(ASubLevelHandler* _Handler, const FString& _StreamingLevel) {
}

void URespawnHandlerComponent::OnSafeZoneEnabled() {
}

void URespawnHandlerComponent::OnSafeZoneDisable() {
}

void URespawnHandlerComponent::OnRespawnTimerEnd() {
}

void URespawnHandlerComponent::OnExplorationTimerEnd() {
}

void URespawnHandlerComponent::OnAlienPhaseChange(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase) {
}

void URespawnHandlerComponent::InitRespawnHandlerComponent(ASubLevelHandler* _SubLevelHandler) {
}

TArray<TSoftClassPtr<AASFCharacter>> URespawnHandlerComponent::GetSavedPatrolEnemiesForGuardPath(AAIGuardPath* GuardPath) {
    return TArray<TSoftClassPtr<AASFCharacter>>();
}


