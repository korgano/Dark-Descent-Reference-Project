#include "Activity_Interact.h"
#include "EnumActivityType.h"

UActivity_Interact::UActivity_Interact() {
    this->ActivityType = EnumActivityType::INTERACTION;
    this->bUseAnimationReady = true;
    this->Action = NULL;
    this->InteractiveComponent = NULL;
    this->InteractingEffect = NULL;
}

void UActivity_Interact::SetInteractiveComponent(UInteractiveComponent* _InteractiveComponent) {
}

void UActivity_Interact::SetAction(UAction* _Action) {
}

void UActivity_Interact::OnInteractionEnded(UInteractiveComponent* _InteractiveComponent, EnumActionStatus _InteractionStatus) {
}

UInteractiveComponent* UActivity_Interact::GetInteractiveComponent() const {
    return NULL;
}


