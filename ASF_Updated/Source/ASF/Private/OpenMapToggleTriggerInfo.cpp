#include "OpenMapToggleTriggerInfo.h"

UOpenMapToggleTriggerInfo::UOpenMapToggleTriggerInfo() {
    this->TriggerLabel = TEXT("Default__OpenMapToggleTriggerInfo");
    this->ID = 0;
    this->TriggerType = EOpenMapToggleType::TRIGGER;
}

void UOpenMapToggleTriggerInfo::OnMinimapOpenChanged(AASFPlayerController* Controller, bool Value) {
}

void UOpenMapToggleTriggerInfo::OnGameplayEventActivated(AGameplayEvent* GameplayEvent) {
}


