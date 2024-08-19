#include "GameplayEventTriggerInfo.h"

UGameplayEventTriggerInfo::UGameplayEventTriggerInfo() {
    this->TriggerLabel = TEXT("Default__GameplayEventTriggerInfo");
    this->GameplayEvent = NULL;
    this->bTriggerOnCompletion = true;
}

void UGameplayEventTriggerInfo::SetTriggerGameplayEvent(AGameplayEvent* _Event) {
}


