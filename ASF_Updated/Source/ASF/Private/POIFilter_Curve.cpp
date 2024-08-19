#include "POIFilter_Curve.h"
#include "EnumFilterType.h"

UPOIFilter_Curve::UPOIFilter_Curve() {
    this->FilterType = EnumFilterType::WEIGHT;
    this->WeightCurve = NULL;
}


