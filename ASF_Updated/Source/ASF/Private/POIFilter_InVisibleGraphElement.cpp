#include "POIFilter_InVisibleGraphElement.h"

UPOIFilter_InVisibleGraphElement::UPOIFilter_InVisibleGraphElement() {
    this->POIComputationPolicy = EnumPOIComputationPolicy::IGNOR_REQUESTER;
    this->InverseCondition = false;
}

bool UPOIFilter_InVisibleGraphElement::IsVisibleAt(UAIPointOfInterestVolatile* LocationOwner) {
    return false;
}


