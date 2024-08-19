#include "SubLevelPrimaryDataAsset.h"

USubLevelPrimaryDataAsset::USubLevelPrimaryDataAsset() {
    this->SubLevelFloorNumber = 0;
    this->bNeedCheckFloor = false;
    this->NumberOfPatrollingDronesAtStart = 0;
    this->allowTheyCutThePowerOnThisLevel = true;
    this->NbMinHumanoidEnnemyBeforeStartingRespawn = 0;
    this->TimerBeforeStartingRespawnHumanoidEnnemy = 15.00f;
    this->DelayBetweenTwoRespawn = 3.00f;
    this->SquadToRespawnDataAsset = NULL;
}

FName USubLevelPrimaryDataAsset::GetSubLevelSaveName() const {
    return NAME_None;
}


