#include "POIFilter_Weight_Constant.h"
#include "EnumFilterType.h"

UPOIFilter_Weight_Constant::UPOIFilter_Weight_Constant() {
    this->FilterType = EnumFilterType::WEIGHT;
    this->WeightType = EnumPOIFilterWeightCurveType::BASE;
    this->Weight = NULL;
}


