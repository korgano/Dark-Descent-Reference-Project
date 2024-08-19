#include "MassiveOnslaughtEffect.h"

UMassiveOnslaughtEffect::UMassiveOnslaughtEffect() {
    this->bNeedToBeSaved = true;
    this->MODataAsset = NULL;
    this->ChosenSpawnPoint = NULL;
    this->bDefeatedByPlayer = false;
}

void UMassiveOnslaughtEffect::OnWaveSpawnTimerExpired() {
}

void UMassiveOnslaughtEffect::OnSpawnPointCondemned(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void UMassiveOnslaughtEffect::OnRoomClusterSet(ARoomCluster* RoomCluster) {
}

void UMassiveOnslaughtEffect::OnRoomClusterRebuilt(ARoomCluster* RoomCluster) {
}

void UMassiveOnslaughtEffect::OnMassiveOnslaughtAlienSpawned(ASpawnPoint* SpawnPoint, UObject* SpawnedObject) {
}

void UMassiveOnslaughtEffect::OnChosenPointSpawnedPawn(ASpawnPoint* SpawnPoint, APawn* Pawn) {
}

void UMassiveOnslaughtEffect::OnAlienDeathOrDestroyed(AASFCharacter* Character) {
}

void UMassiveOnslaughtEffect::OnAlienChangeState(AAIController_Alien* AIController, EnumAiState OldState, EnumAiState NewState) {
}

void UMassiveOnslaughtEffect::OnAlienAbducting(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

int32 UMassiveOnslaughtEffect::GetRemainingAliensToKillCount() const {
    return 0;
}

FMassiveOnslaughtData UMassiveOnslaughtEffect::GetMOData() const {
    return FMassiveOnslaughtData{};
}

TArray<AAlien*> UMassiveOnslaughtEffect::GetBoundAliens() const {
    return TArray<AAlien*>();
}


