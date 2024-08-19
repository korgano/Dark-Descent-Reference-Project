#include "APCRoadProgressTriggerInfo.h"

UAPCRoadProgressTriggerInfo::UAPCRoadProgressTriggerInfo() {
    this->TriggerLabel = TEXT("Default__APCRoadProgressTriggerInfo");
}

void UAPCRoadProgressTriggerInfo::OnExtractionTransportRegistered(AASFGameState_TacticalMode* GameState, AExtractionTransport* ExtractionTransport) {
}


