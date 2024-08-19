#include "POIFilter_Weight_New.h"
#include "EnumFilterType.h"

UPOIFilter_Weight_New::UPOIFilter_Weight_New() {
    this->FilterType = EnumFilterType::WEIGHT;
    this->WeightType = EnumPOIFilterWeightCurveType::BASE;
}


