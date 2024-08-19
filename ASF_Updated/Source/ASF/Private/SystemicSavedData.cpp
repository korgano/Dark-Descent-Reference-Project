#include "SystemicSavedData.h"

FSystemicSavedData::FSystemicSavedData() {
    this->IsActivated = EThreeStateBool::B_FALSE;
    this->CurrentAggressiveness = 0;
    this->AggressivenessIncrementRemainingDelay = 0.00f;
    this->TrackElapsedTime = 0.00f;
    this->AlienExplorationRemainingDelay = 0;
}

