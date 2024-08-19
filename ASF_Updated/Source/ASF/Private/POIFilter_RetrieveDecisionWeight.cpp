#include "POIFilter_RetrieveDecisionWeight.h"
#include "EnumFilterType.h"

UPOIFilter_RetrieveDecisionWeight::UPOIFilter_RetrieveDecisionWeight() {
    this->FilterType = EnumFilterType::WEIGHT;
    this->FromCurrentResult = false;
}


