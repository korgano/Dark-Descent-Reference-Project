#include "Action_Interaction.h"
#include "Templates/SubclassOf.h"

UAction_Interaction::UAction_Interaction() {
    this->InteractiveComponent = NULL;
    this->InteractingEffect = NULL;
    this->FutureCharacterInteractionEffect = NULL;
}

void UAction_Interaction::OnInteractionIsNoMoreDoable(UInteractiveComponent* _InteractiveComponent) {
}

UAction_Interaction* UAction_Interaction::Create_Action_Interaction(AActor* _Context, TSubclassOf<UAction_Interaction> _ActionClass, FDataMove _DataMove, UInteractiveComponent* _InteractiveComponent) {
    return NULL;
}


