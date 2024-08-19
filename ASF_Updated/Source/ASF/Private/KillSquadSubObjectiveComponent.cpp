#include "KillSquadSubObjectiveComponent.h"

UKillSquadSubObjectiveComponent::UKillSquadSubObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NbTargetSquadsKilled = 0;
}

void UKillSquadSubObjectiveComponent::OnTwinActorLinked(AGameplayTwinActor* TwinActor) {
}

void UKillSquadSubObjectiveComponent::OnTargetSquadSpawned(ASquadSpawner* SquadSpawner, ASquad* Squad) {
}

void UKillSquadSubObjectiveComponent::OnTargetSquadKilled(ASquad* Squad) {
}

void UKillSquadSubObjectiveComponent::OnTargetSquadEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UKillSquadSubObjectiveComponent::OnSpawnerEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


