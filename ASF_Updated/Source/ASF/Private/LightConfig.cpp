#include "LightConfig.h"

FLightConfig::FLightConfig() {
    this->bApplyIntensity = false;
    this->Intensity = 0.00f;
    this->bApplyLightColor = false;
    this->bApplyVolumetricScatteringIntensity = false;
    this->VolumetricScatteringIntensity = 0.00f;
    this->bApplyRelativeRotation = false;
    this->bApplyCastVolumetricShadow = false;
    this->bCastVolumetricShadow = false;
    this->bApplyDynamicShadowDistanceMovableLight = false;
    this->DynamicShadowDistanceMovableLight = 0.00f;
    this->bApplyDynamicShadowCascades = false;
    this->DynamicShadowCascades = 0;
}

