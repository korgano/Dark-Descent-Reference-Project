#include "POIFilter_Weight_DeltaTime.h"
#include "EnumFilterType.h"

UPOIFilter_Weight_DeltaTime::UPOIFilter_Weight_DeltaTime() {
    this->FilterType = EnumFilterType::WEIGHT;
    this->WeightType = EnumPOIFilterWeightCurveType::BASE;
    this->MaxTime = NULL;
    this->MaxTimeNormalized = NULL;
    this->ModifierType = EnumDataModifierType::ADD;
}


