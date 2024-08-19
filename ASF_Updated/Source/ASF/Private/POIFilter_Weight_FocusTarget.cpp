#include "POIFilter_Weight_FocusTarget.h"
#include "EnumFilterType.h"

UPOIFilter_Weight_FocusTarget::UPOIFilter_Weight_FocusTarget() {
    this->FilterType = EnumFilterType::WEIGHT;
    this->Weight_DistanceImpact = NULL;
    this->MaxDistance = NULL;
}


