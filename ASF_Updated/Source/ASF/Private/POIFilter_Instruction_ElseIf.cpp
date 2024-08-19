#include "POIFilter_Instruction_ElseIf.h"
#include "EnumFilterType.h"

UPOIFilter_Instruction_ElseIf::UPOIFilter_Instruction_ElseIf() {
    this->FilterType = EnumFilterType::CONDITION_WEIGHT;
    this->WeightType = EnumPOIFilterWeightCurveType::BASE;
}


