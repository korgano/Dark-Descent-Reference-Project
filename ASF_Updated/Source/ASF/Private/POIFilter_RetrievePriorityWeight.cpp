#include "POIFilter_RetrievePriorityWeight.h"
#include "EnumFilterType.h"

UPOIFilter_RetrievePriorityWeight::UPOIFilter_RetrievePriorityWeight() {
    this->FilterType = EnumFilterType::WEIGHT;
    this->FromCurrentResult = false;
}


