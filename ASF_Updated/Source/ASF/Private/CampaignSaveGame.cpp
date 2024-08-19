#include "CampaignSaveGame.h"

UCampaignSaveGame::UCampaignSaveGame() {
    this->MaxedSergeant = false;
    this->MaxedGunner = false;
    this->MaxedTecker = false;
    this->MaxedMedic = false;
    this->MaxedRecon = false;
    this->MaxedAll = false;
    this->marineLost = false;
    this->DatapadsGathered = 0;
    this->EnemiesKilled = 0;
    this->QueensKilled = 0;
    this->SurvivorsSaved = 0;
}

int32 UCampaignSaveGame::IncrementSurvivorsSaved() {
    return 0;
}

int32 UCampaignSaveGame::IncrementQueensKilled() {
    return 0;
}

void UCampaignSaveGame::IncrementEnemiesKilled() {
}

void UCampaignSaveGame::IncrementDatapadsGathered() {
}

int32 UCampaignSaveGame::GetSurvivorsSaved() const {
    return 0;
}

int32 UCampaignSaveGame::GetEnemiesKilled() const {
    return 0;
}

float UCampaignSaveGame::GetDatapadsGatheringProgress() {
    return 0.0f;
}

bool UCampaignSaveGame::CheckDatapadsRemaining() {
    return false;
}


