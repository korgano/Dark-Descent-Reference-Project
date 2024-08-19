#include "InfluenceMapFilterArea.h"

FInfluenceMapFilterArea::FInfluenceMapFilterArea() {
    this->MapAreaClass = NULL;
    this->TravelCostOverride = 0.00f;
    this->EnteringCostOverride = 0.00f;
    this->EnteringCostOnlyOnThreshold = false;
    this->bIsExcluded = false;
}

