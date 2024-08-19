#include "DataCarrierMarine.h"

FDataCarrierMarine::FDataCarrierMarine() {
    this->ID = 0;
    this->ClassDataAsset = NULL;
    this->Level = 0;
    this->LevelGain = 0;
    this->NbXPPoints = 0;
    this->MissionCount = 0;
    this->LostHealth = 0.00f;
    this->Trait = NULL;
    this->bHasNewAvailableUpgrade = false;
    this->TurnOfDeath = 0;
    this->InitialBravery = 0;
    this->MaxStressStepAchieved = EStressStep::Cool;
}

