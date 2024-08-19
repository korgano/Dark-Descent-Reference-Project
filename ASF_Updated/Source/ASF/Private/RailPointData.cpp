#include "RailPointData.h"

FRailPointData::FRailPointData() {
    this->StartPointIndex = 0;
    this->TravelType = EnumSplineSegmentTravelType::CRAWL;
    this->TravelMethod = EnumSplineSegmentTravelMethod::DURATION;
    this->TravelDuration = 0.00f;
    this->TravelSpeed = 0.00f;
    this->KeepSettingsUntilNextExplicitPointData = false;
    this->StopTime = 0.00f;
    this->IsLastSegment = false;
}

