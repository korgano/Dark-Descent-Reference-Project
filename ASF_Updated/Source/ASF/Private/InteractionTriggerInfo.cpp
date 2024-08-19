#include "InteractionTriggerInfo.h"

UInteractionTriggerInfo::UInteractionTriggerInfo() {
    this->TriggerLabel = TEXT("Default__InteractionTriggerInfo");
    this->InteractionTypeClass = NULL;
    this->StatutToTrigger = EnumActionStatus::SUCCESS;
}


