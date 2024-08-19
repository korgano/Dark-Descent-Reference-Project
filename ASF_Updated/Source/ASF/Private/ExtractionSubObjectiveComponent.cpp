#include "ExtractionSubObjectiveComponent.h"

UExtractionSubObjectiveComponent::UExtractionSubObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HumanoidToExtract = NULL;
}

void UExtractionSubObjectiveComponent::SetHumanoidToExtract(AHumanoid* Humanoid) {
}

void UExtractionSubObjectiveComponent::OnHumanoidDestroyed(AActor* ActorKilled, EnumDestroyReason DestroyReason) {
}

void UExtractionSubObjectiveComponent::OnHumanoidCarriedStateChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

AHumanoid* UExtractionSubObjectiveComponent::GetHumanoidToExtract() const {
    return NULL;
}


