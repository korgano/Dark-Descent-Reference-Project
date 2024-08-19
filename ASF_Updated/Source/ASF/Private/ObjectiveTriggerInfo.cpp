#include "ObjectiveTriggerInfo.h"

UObjectiveTriggerInfo::UObjectiveTriggerInfo() {
    this->TriggerLabel = TEXT("Default__ObjectiveTriggerInfo");
    this->ObjectiveStatus = EnumObjectiveStatus::PENDING;
    this->Objective = NULL;
    this->bAfterBroadcast = false;
}


