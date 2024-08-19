#include "StructPOIFilterWeightCurve.h"

FStructPOIFilterWeightCurve::FStructPOIFilterWeightCurve() {
    this->UnitMultiplier = 0.00f;
    this->CurveWeigth = NULL;
    this->CurveType = EnumPOIFilterWeightCurveType::NONE;
}

