#include "POIFilter_Instruction_And.h"
#include "EnumFilterType.h"

UPOIFilter_Instruction_And::UPOIFilter_Instruction_And() {
    this->FilterType = EnumFilterType::CONDITION_WEIGHT;
    this->WeightType = EnumPOIFilterWeightCurveType::BASE;
}


