#include "AmbushSaveData.h"

FAmbushSaveData::FAmbushSaveData() {
    this->State = EAmbushState::NONE;
    this->FillTimerRemaining = 0.00f;
    this->EmptyTimerRemaining = 0.00f;
    this->NextEmptyDelayAfterDetection = 0.00f;
    this->HasTrackerIndicatorData = false;
    this->TrackerDepartureTimerRemaining = 0.00f;
    this->TrackerArrivalTimerRemaining = 0.00f;
}

