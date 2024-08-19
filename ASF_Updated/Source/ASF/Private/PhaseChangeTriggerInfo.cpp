#include "PhaseChangeTriggerInfo.h"

UPhaseChangeTriggerInfo::UPhaseChangeTriggerInfo() {
    this->TriggerLabel = TEXT("Default__PhaseChangeTriggerInfo");
}

void UPhaseChangeTriggerInfo::OnPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase) {
}


