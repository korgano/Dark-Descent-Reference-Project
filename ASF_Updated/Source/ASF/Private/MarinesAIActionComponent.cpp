#include "MarinesAIActionComponent.h"

UMarinesAIActionComponent::UMarinesAIActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInitialized = false;
    this->Humanoid = NULL;
    this->CurrentAIAction = NULL;
}

UAction* UMarinesAIActionComponent::StartStateAction() {
    return NULL;
}

void UMarinesAIActionComponent::SetCurrentAIAction(UAIAction* _CurrentAIAction) {
}

void UMarinesAIActionComponent::OnActionEnded(UAction* Action, EnumActionStatus ActionStatus) {
}

void UMarinesAIActionComponent::InitActions(AHumanoidTactical* _Humanoid) {
}

UAIAction* UMarinesAIActionComponent::GetCurrentAIAction() {
    return NULL;
}

bool UMarinesAIActionComponent::CurrentActionOngoing() {
    return false;
}

bool UMarinesAIActionComponent::ActionSelected() {
    return false;
}


