#include "POIPerceptionObjectIDTriggerInfo.h"

UPOIPerceptionObjectIDTriggerInfo::UPOIPerceptionObjectIDTriggerInfo() {
    this->TriggerLabel = TEXT("Default__POIPerceptionObjectIDTriggerInfo");
    this->PerceptionConfig_DataAsset = NULL;
    this->POIComponent = NULL;
}

void UPOIPerceptionObjectIDTriggerInfo::OnTriggerPerceived(AMission* Mission, AActor* PerceiveGATrigger) {
}

void UPOIPerceptionObjectIDTriggerInfo::EnablePOI(AActor* _Actor) {
}

void UPOIPerceptionObjectIDTriggerInfo::BindEventToCharacter(AASFGameStateBase* _GameState, AASFCharacter* _Character) {
}


