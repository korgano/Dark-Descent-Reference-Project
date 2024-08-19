#include "TriggerInfo.h"

UTriggerInfo::UTriggerInfo() {
    this->TriggerLabel = TEXT("Default__TriggerInfo");
    this->bThisTriggerShouldBeFalse = false;
    this->bOnlyTriggerWhenTriggered = false;
    this->ParentEvent = NULL;
    this->bIsTriggerActive = true;
}

void UTriggerInfo::SetTriggerLabel(const FString& NewLabel) {
}

bool UTriggerInfo::IsRelevant(UTriggerInfo* OtherTriggerInfo, bool& NewTriggerActivation) {
    return false;
}

void UTriggerInfo::InitTriggerInfoEarly_Implementation(AGameplayEvent* _GameplayEvent) {
}

void UTriggerInfo::InitTriggerInfo_Implementation(AGameplayEvent* _GameplayEvent) {
}

FString UTriggerInfo::GetTriggerLabel() const {
    return TEXT("");
}

bool UTriggerInfo::CheckValidityTrigger() const {
    return false;
}


