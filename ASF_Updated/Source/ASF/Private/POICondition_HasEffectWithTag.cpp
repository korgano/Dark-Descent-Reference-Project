#include "POICondition_HasEffectWithTag.h"

UPOICondition_HasEffectWithTag::UPOICondition_HasEffectWithTag() {
    this->POIComputationPolicy = EnumPOIComputationPolicy::IGNOR_REQUESTER;
}

bool UPOICondition_HasEffectWithTag::HasEffectWithTag(UObject* _Object) {
    return false;
}


