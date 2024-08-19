#include "POIFilter_Weight_Spot.h"
#include "EnumFilterType.h"

UPOIFilter_Weight_Spot::UPOIFilter_Weight_Spot() {
    this->FilterType = EnumFilterType::CONDITION_WEIGHT;
    this->WeightValidationThreshold = NULL;
    this->DistanceMultiplier = NULL;
    this->FromResult = false;
    this->InverseCondition = false;
}


