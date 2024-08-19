#include "SearchSubObjectiveComponent.h"

USearchSubObjectiveComponent::USearchSubObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LootedTargetsCount = 0;
}

void USearchSubObjectiveComponent::OnTargetLootableLooted(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void USearchSubObjectiveComponent::OnTargetLootableLinked(AGameplayTwinActor* TwinActor) {
}

void USearchSubObjectiveComponent::OnTargetLootableEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void USearchSubObjectiveComponent::OnAdditionalLootableLooted(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void USearchSubObjectiveComponent::OnAdditionalLootableLinked(AGameplayTwinActor* TwinActor) {
}

void USearchSubObjectiveComponent::OnAdditionalLootableEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


