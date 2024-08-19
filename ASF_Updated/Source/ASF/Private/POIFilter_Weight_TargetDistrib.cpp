#include "POIFilter_Weight_TargetDistrib.h"
#include "EnumFilterType.h"

UPOIFilter_Weight_TargetDistrib::UPOIFilter_Weight_TargetDistrib() {
    this->FilterType = EnumFilterType::WEIGHT;
    this->MaxEnemyTarget = 2;
    this->Weight_DistanceImpact = NULL;
    this->MaxDistance = NULL;
    this->MultiplyDistanceImpact = false;
}


