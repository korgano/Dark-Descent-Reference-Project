#include "HumanoidRespawnhandlerComponent.h"

UHumanoidRespawnhandlerComponent::UHumanoidRespawnhandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurSubLevel = NULL;
    this->CurrentPOIContainer = NULL;
}

void UHumanoidRespawnhandlerComponent::UnregisterHumanoidSquadSpawner(ASquadSpawner* SpawnerToUnregister) {
}

void UHumanoidRespawnhandlerComponent::RegisterHumanoidSquadSpawner(ASquadSpawner* SpawnerToRegister) {
}

void UHumanoidRespawnhandlerComponent::OnSubLevelIsLoaded(ASubLevelHandler* SubLevelHandler, const FString& SubLevelName) {
}

void UHumanoidRespawnhandlerComponent::OnRespawnTimerFinished() {
}

void UHumanoidRespawnhandlerComponent::OnPOIRemovedToContainer(UAIPointOfInterestContainer* _AIPointOfInterestContainer, UAIPointOfInterestConfig* _PointOfInterestConfig) {
}

void UHumanoidRespawnhandlerComponent::OnPOIAddedToContainer(UAIPointOfInterestContainer* _AIPointOfInterestContainer, UAIPointOfInterestConfig* _PointOfInterestConfig) {
}

bool UHumanoidRespawnhandlerComponent::IsSpawnerAvailableForSpawn(ASquadSpawner* Spawner) const {
    return false;
}


