#include "POIPerceptionUpdatedTriggerInfo.h"

UPOIPerceptionUpdatedTriggerInfo::UPOIPerceptionUpdatedTriggerInfo() {
    this->TriggerLabel = TEXT("Default__POIPerceptionUpdatedTriggerInfo");
    this->CharacterTrigger = NULL;
}

void UPOIPerceptionUpdatedTriggerInfo::OnPerceptionUpdated(UAI_POIPerceptionComponent* _PerceptionComp, UPOIDefaultContainer* _PerceptionResult, FGameplayTag _PerceptionTag) {
}

void UPOIPerceptionUpdatedTriggerInfo::BindEventToCharacter(AASFGameStateBase* _GameState, AASFCharacter* _Character) {
}


