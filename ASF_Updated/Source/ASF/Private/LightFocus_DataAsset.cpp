#include "LightFocus_DataAsset.h"

ULightFocus_DataAsset::ULightFocus_DataAsset() {
    this->Angle = 50.00f;
    this->HighlightDist = 4500.00f;
    this->HighlightDistInfraredGoggles = 2250.00f;
    this->Radius = 1500.00f;
    this->Intensity = 30.00f;
    this->VolumetricScatteringIntensity = 0.50f;
    this->HighlightFocusMinDuration = 0.50f;
    this->HighlightDurationAfterFocus = 5.00f;
    this->MalusPerRayCollision = 300.00f;
    this->MinDistToReach = 300.00f;
    this->RayAngleVariation = 10.00f;
}


