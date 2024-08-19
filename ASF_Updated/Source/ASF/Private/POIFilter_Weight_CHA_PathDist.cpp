#include "POIFilter_Weight_CHA_PathDist.h"
#include "EnumFilterType.h"

UPOIFilter_Weight_CHA_PathDist::UPOIFilter_Weight_CHA_PathDist() {
    this->FilterType = EnumFilterType::CONDITION_WEIGHT;
    this->WeightType = EnumPOIFilterWeightCurveType::BASE;
    this->MaxDistance = NULL;
}


