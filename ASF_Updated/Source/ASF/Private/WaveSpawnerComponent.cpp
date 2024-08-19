#include "WaveSpawnerComponent.h"

UWaveSpawnerComponent::UWaveSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIStateForSpawned = EnumAiState::SEEK;
    this->autoStartNextWave = false;
    this->delayMinNextWave = 0.10f;
    this->delayMaxNextWave = 5.00f;
    this->delayOnFirstWave = false;
    this->UsedWithAWaveSubObjective = true;
    this->infiniteLoop = false;
    this->infiniteLoopDelayToRestartMin = 0.00f;
    this->infiniteLoopDelayToRestartMax = 0.00f;
    this->reUseFirstWaveForPool = false;
}

void UWaveSpawnerComponent::StopSpawnWaves() {
}

void UWaveSpawnerComponent::StartSpawnWaves() {
}

void UWaveSpawnerComponent::OnEnnemySpawnedDelayed(UObject* SpawnedObject) {
}

void UWaveSpawnerComponent::OnEnnemySpawnedDeadOrDestroy(AActor* DestroyedActor) {
}

void UWaveSpawnerComponent::OnEnnemySpawned(ASpawnPoint* SpawnPoint, UObject* SpawnedObject) {
}

void UWaveSpawnerComponent::OnEnnemyDiedOrDestroyed(AASFCharacter* _Character) {
}

void UWaveSpawnerComponent::Log(const FString& debugString) {
}

bool UWaveSpawnerComponent::IsSpawning() const {
    return false;
}

bool UWaveSpawnerComponent::IsAtTheLastWave() const {
    return false;
}

void UWaveSpawnerComponent::InternalSpawnNextEnemyWave() {
}

int32 UWaveSpawnerComponent::GetLastWaveIndex() const {
    return 0;
}

int32 UWaveSpawnerComponent::GetEnnemySpawnedAliveCount() const {
    return 0;
}

void UWaveSpawnerComponent::AskSpawnNextEnemyWave() {
}


