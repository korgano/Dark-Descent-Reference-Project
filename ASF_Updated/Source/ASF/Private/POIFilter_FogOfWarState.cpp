#include "POIFilter_FogOfWarState.h"

UPOIFilter_FogOfWarState::UPOIFilter_FogOfWarState() {
    this->POIComputationPolicy = EnumPOIComputationPolicy::IGNOR_REQUESTER;
    this->FOWVisionType = EnumFOWVisionType::VISIBLE;
    this->pixelLength = 1;
}


