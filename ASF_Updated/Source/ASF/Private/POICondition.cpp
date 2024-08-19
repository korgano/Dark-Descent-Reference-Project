#include "POICondition.h"

UPOICondition::UPOICondition() {
    this->InverseCondition = false;
}

bool UPOICondition::ComputeCondition_int(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData) {
    return false;
}

bool UPOICondition::ComputeCondition(UAIPointOfInterestVolatile* _Requester, UAIPointOfInterestVolatile* _Requested, FStructPOIResultData& _InResultData) {
    return false;
}


