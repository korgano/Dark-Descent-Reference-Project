#include "DataCarrierData.h"

FDataCarrierData::FDataCarrierData() {
    this->CurrentCampaignTurn = 0;
    this->HiveSize = 0;
    this->bShouldPlayMissionBrief = false;
    this->MissionCompletionPercent = 0.00f;
    this->ObjectiveCompletedCount = 0;
    this->XpGainedDuringLastRun = 0;
    this->MedbayCareDurationMultiplier = 0.00f;
    this->bUseSplitscreen = false;
}

