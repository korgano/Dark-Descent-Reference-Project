#include "POIFilter_Weight_Validation.h"
#include "EnumFilterType.h"

UPOIFilter_Weight_Validation::UPOIFilter_Weight_Validation() {
    this->FilterType = EnumFilterType::CONDITION_WEIGHT;
    this->WeightValidationThreshold = NULL;
    this->InverseCondition = false;
}


