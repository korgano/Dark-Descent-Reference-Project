#include "PowerOffLightComponent.h"

UPowerOffLightComponent::UPowerOffLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PowerOffIntensity = 0.00f;
    this->PowerOnIntensitySave = 0.00f;
}


