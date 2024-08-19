#include "POIFilter_Weight_PathDist.h"
#include "EnumFilterType.h"

UPOIFilter_Weight_PathDist::UPOIFilter_Weight_PathDist() {
    this->FilterType = EnumFilterType::CONDITION_WEIGHT;
    this->NavFilter = NULL;
    this->WeightType = EnumPOIFilterWeightCurveType::BASE;
    this->MaxDistance = NULL;
}


