#include "RailDrivenCharacterData.h"

FRailDrivenCharacterData::FRailDrivenCharacterData() {
    this->DrivenCharacter = NULL;
    this->DrivenByAnimator = false;
    this->TraveledDistance = 0.00f;
    this->StartIndex = 0;
    this->NextPointIndex = 0;
    this->CurrentSpeed = 0.00f;
    this->DistanceToNextPoint = 0.00f;
    this->TimeToNextPoint = 0.00f;
    this->TimeToDeparture = 0.00f;
}

