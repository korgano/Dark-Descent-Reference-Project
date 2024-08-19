#include "POIFilter_Weight_Dist.h"
#include "EnumFilterType.h"

UPOIFilter_Weight_Dist::UPOIFilter_Weight_Dist() {
    this->FilterType = EnumFilterType::CONDITION_WEIGHT;
    this->WeightType = EnumPOIFilterWeightCurveType::BASE;
    this->MaxDistance = NULL;
}


