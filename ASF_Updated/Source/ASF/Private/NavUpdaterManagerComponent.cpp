#include "NavUpdaterManagerComponent.h"

UNavUpdaterManagerComponent::UNavUpdaterManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UNavUpdaterManagerComponent::UpdateSafeZoneStatus() {
    return false;
}

void UNavUpdaterManagerComponent::NotifieNavigationRebuild(AActor* NavRebuildActor) {
}

void UNavUpdaterManagerComponent::NotifieNavigationGenerationFinished(ANavigationData* NavData) {
}


