#include "SubObjectiveTriggerInfo.h"

USubObjectiveTriggerInfo::USubObjectiveTriggerInfo() {
    this->TriggerLabel = TEXT("Default__SubObjectiveTriggerInfo");
    this->ObjectiveStatus = EnumObjectiveStatus::PENDING;
    this->Objective = NULL;
}


