#include "POIFilter_Weight_Mark.h"
#include "EnumFilterType.h"

UPOIFilter_Weight_Mark::UPOIFilter_Weight_Mark() {
    this->FilterType = EnumFilterType::CONDITION_WEIGHT;
    this->WeightType = EnumPOIFilterWeightCurveType::PRIORITY;
}


