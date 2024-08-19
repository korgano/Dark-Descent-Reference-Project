#include "MultiSubObjectiveComponent.h"

UMultiSubObjectiveComponent::UMultiSubObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->countSubObjective = 0;
}

void UMultiSubObjectiveComponent::TryToTriggerTriggerInfo() {
}

void UMultiSubObjectiveComponent::OnSubLinkedSucceeded(USubObjectiveComponent* subobjective) {
}


