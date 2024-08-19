#include "WaveSubObjectiveComponent.h"

UWaveSubObjectiveComponent::UWaveSubObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DelayWithoutEnnemyTrackedToNextWave = 15.00f;
    this->DeactiveSystemicOnStart = true;
    this->ReactiveSystemicOnFinish = true;
}

void UWaveSubObjectiveComponent::OnWaveSpawnerWaveStartWave(UWaveSpawnerComponent* WaveSpawner) {
}

void UWaveSubObjectiveComponent::OnWaveSpawnerWaveEnded(UWaveSpawnerComponent* WaveSpawner) {
}

void UWaveSubObjectiveComponent::OnWaveSpawnerWaveCleared(UWaveSpawnerComponent* WaveSpawner) {
}

void UWaveSubObjectiveComponent::OnTrackingSystemUpdated(UTrackingSystemComponent* TrackingSystemComponent) {
}

void UWaveSubObjectiveComponent::EventPlayNarrativeDialogueOnWaveStarted(UWaveSubObjectiveComponent* WaveSubObjectiveComp, UWaveSpawnerComponent* WaveSpawnerComponent) {
}

void UWaveSubObjectiveComponent::EventPlayNarrativeDialogueOnWaveCleared(UWaveSubObjectiveComponent* WaveSubObjectiveComp, UWaveSpawnerComponent* WaveSpawnerComponent) {
}


