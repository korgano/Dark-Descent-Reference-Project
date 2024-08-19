#include "POIFilter_VisibleInViewport.h"

UPOIFilter_VisibleInViewport::UPOIFilter_VisibleInViewport() {
    this->POIComputationPolicy = EnumPOIComputationPolicy::IGNOR_REQUESTER;
}

bool UPOIFilter_VisibleInViewport::IsVisibleAt(UAIPointOfInterestVolatile* LocationOwner) {
    return false;
}


