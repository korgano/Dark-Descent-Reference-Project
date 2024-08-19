#include "POIFilter_Skill_Area.h"

UPOIFilter_Skill_Area::UPOIFilter_Skill_Area() {
    this->POIComputationPolicy = EnumPOIComputationPolicy::IGNOR_REQUESTED;
    this->Angle = NULL;
    this->MaxDist = NULL;
    this->OffsetDist = NULL;
    this->InverseCondition = false;
}


