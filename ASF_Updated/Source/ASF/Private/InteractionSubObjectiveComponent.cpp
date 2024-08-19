#include "InteractionSubObjectiveComponent.h"

UInteractionSubObjectiveComponent::UInteractionSubObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanSave = true;
    this->InteractionTypeClass = NULL;
    this->ForceIsNarrativeInteraction = false;
    this->TargetInteractiveComponent = NULL;
    this->InteractionActivationStateBeforeObjective = false;
    this->InteractionNarrativeStateBeforeObjective = false;
    this->bAutoFocusObjectiveOnCompletion = true;
    this->bIsInteractionInit = false;
}

void UInteractionSubObjectiveComponent::SetActorTarget(AGameplayTwinActor* _ActorTarget) {
}

void UInteractionSubObjectiveComponent::SaveOnInteractionStarted(UInteractiveComponent* _InteractiveComponent, EnumActionStatus _ActionStatus) {
}

void UInteractionSubObjectiveComponent::OnInteractionStarted_Implementation(UInteractiveComponent* _InteractiveComponent, EnumActionStatus _ActionStatus) {
}

void UInteractionSubObjectiveComponent::OnInteractionEnded_Implementation(UInteractiveComponent* _InteractiveComponent, EnumActionStatus _ActionStatus) {
}


