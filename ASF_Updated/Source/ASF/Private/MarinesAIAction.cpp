#include "MarinesAIAction.h"

UMarinesAIAction::UMarinesAIAction() {
    this->ActionClass = NULL;
    this->Action = NULL;
}

UAction* UMarinesAIAction::StartMarineAction_Implementation(AHumanoidTactical* _Humanoid) {
    return NULL;
}

void UMarinesAIAction::HumanoidActionEnded_Implementation(UAction* _Action, EnumActionStatus _ActionStatus) {
}


