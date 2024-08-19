#include "CampaignParameters.h"

FCampaignParameters::FCampaignParameters() {
    this->GeneralDifficulty = EnumMissionDifficulty::NONE;
    this->EnemyHealthDifficulty = EnumMissionDifficulty::NONE;
    this->DetectionTimeDifficulty = EnumMissionDifficulty::NONE;
    this->DeathClockDifficulty = EnumMissionDifficulty::NONE;
    this->AgressivenessIncrementationDelayDifficulty = EnumMissionDifficulty::NONE;
    this->SaveMode = ESaveMode::PERMISSIVE;
    this->bDynamicTutorials = false;
    this->bNewGamePlus = false;
    this->StartingInfestationLevel = 0;
    this->ExtraDamage = 0;
}

