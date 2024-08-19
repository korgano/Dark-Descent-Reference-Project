#include "POIFilter_IsCoverFromThreat.h"

UPOIFilter_IsCoverFromThreat::UPOIFilter_IsCoverFromThreat() {
    this->WeightType = EnumPOIFilterWeightCurveType::PRIORITY;
    this->Weight = 0;
    this->InverseCondition = false;
    this->POIComputationPolicy = EnumPOIComputationPolicy::IGNOR_REQUESTER;
}


