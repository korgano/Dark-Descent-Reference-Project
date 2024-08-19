#include "ReachSubObjectiveComponent.h"

UReachSubObjectiveComponent::UReachSubObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanSave = true;
    this->DeactivateTriggersOnCompletion = true;
    this->bOnlyCreateFeedbackForFirstTrigger = false;
}

void UReachSubObjectiveComponent::OnComponentBeginOverlap(ATriggerObjectiveActor* Trigger, AActor* Actor) {
}


