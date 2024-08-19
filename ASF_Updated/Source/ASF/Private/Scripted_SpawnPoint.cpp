#include "Scripted_SpawnPoint.h"

AScripted_SpawnPoint::AScripted_SpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRegisterToEventSystem = false;
    this->NextWaveToBeSpawnedIndex = 0;
    this->ResetIndexOnLastWaveSpawn = false;
    this->AlienSpawnAIState = EnumAiState::SEEK;
}

void AScripted_SpawnPoint::SpawnNextEnemyWave(bool SpawnAllWavesAtOnce) {
}

bool AScripted_SpawnPoint::HasSpawnedAllWaves() const {
    return false;
}

void AScripted_SpawnPoint::DeferredSpawnNextEnemyWave(const FSpawnDeferredDynamicDelegate& DeferredSpawnEvent, bool SpawnAllWavesAtOnce) {
}


