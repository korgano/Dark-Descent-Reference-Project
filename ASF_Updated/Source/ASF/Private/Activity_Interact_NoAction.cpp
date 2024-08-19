#include "Activity_Interact_NoAction.h"
#include "Templates/SubclassOf.h"

UActivity_Interact_NoAction::UActivity_Interact_NoAction() {
}

void UActivity_Interact_NoAction::OnInteractionIsNoMoreDoable(UInteractiveComponent* _InteractiveComponent) {
}

FGameplayTag UActivity_Interact_NoAction::GetResourceNeeded() {
    return FGameplayTag{};
}

float UActivity_Interact_NoAction::GetInteractionDuration() {
    return 0.0f;
}

UActivity_Interact_NoAction* UActivity_Interact_NoAction::Create_Activity_Interact_NoAction_BP(TSubclassOf<UActivity_Interact_NoAction> _Activity_Interact_NoAction_Type, AActor* _Instigator, UInteractiveComponent* _InteractiveComponent) {
    return NULL;
}


