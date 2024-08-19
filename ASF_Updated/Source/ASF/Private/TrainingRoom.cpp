#include "TrainingRoom.h"

ATrainingRoom::ATrainingRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseMinXpGain = 0;
    this->BaseMaxXpGain = 0;
    this->MinXpGain = 0;
    this->MaxXpGain = 0;
    this->MaxXpGainLevel = 3;
}

void ATrainingRoom::SendMarineToIntensiveTraining(AHumanoid* _Marine) {
}

void ATrainingRoom::RetrieveMarineFromIntensiveTraining(AHumanoid* _Marine) {
}

void ATrainingRoom::RemoveTrainingMarine(AHumanoid* _Marine) {
}

bool ATrainingRoom::IsMarineInIntensiveTraining(const AHumanoid* _Marine) const {
    return false;
}

void ATrainingRoom::AddTrainingMarine(AHumanoid* _Marine) {
}


