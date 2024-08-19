#include "POICondition_SquadStatus.h"

UPOICondition_SquadStatus::UPOICondition_SquadStatus() {
    this->SquadStatus = EnumSquadStatus::SPOTTED;
    this->POIComputationPolicy = EnumPOIComputationPolicy::IGNOR_REQUESTER;
}


