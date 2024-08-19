#include "POICondition_LifeComparison.h"

UPOICondition_LifeComparison::UPOICondition_LifeComparison() {
    this->POIComputationPolicy = EnumPOIComputationPolicy::IGNOR_REQUESTER;
    this->Comparison = EnumComparisonOperator::INFERIOR;
    this->ComparedValue = NULL;
}


