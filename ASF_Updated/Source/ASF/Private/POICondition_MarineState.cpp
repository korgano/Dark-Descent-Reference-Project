#include "POICondition_MarineState.h"

UPOICondition_MarineState::UPOICondition_MarineState() {
    this->MarineStatus = EnumAiEnemyMarineState::GUARD;
    this->POIComputationPolicy = EnumPOIComputationPolicy::IGNOR_REQUESTER;
}


