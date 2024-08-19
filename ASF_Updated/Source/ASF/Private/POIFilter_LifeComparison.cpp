#include "POIFilter_LifeComparison.h"

UPOIFilter_LifeComparison::UPOIFilter_LifeComparison() {
    this->POIComputationPolicy = EnumPOIComputationPolicy::IGNOR_REQUESTER;
    this->Comparison = EnumComparisonOperator::INFERIOR;
    this->ComparedValue = NULL;
}


