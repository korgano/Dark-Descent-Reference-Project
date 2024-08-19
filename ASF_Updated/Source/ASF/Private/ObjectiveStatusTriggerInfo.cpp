#include "ObjectiveStatusTriggerInfo.h"

UObjectiveStatusTriggerInfo::UObjectiveStatusTriggerInfo() {
    this->TriggerLabel = TEXT("Default__ObjectiveStatusTriggerInfo");
    this->ObjectiveStatus = EnumObjectiveStatus::PENDING;
    this->Objective = NULL;
    this->bAfterBroadcast = false;
}


