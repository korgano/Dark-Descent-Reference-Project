#include "Weather_PS_Component.h"

UWeather_PS_Component::UWeather_PS_Component(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnRate = 0.00f;
    this->Opacity = 1.00f;
    this->EmissiveScale = 0.00f;
    this->Size_ScaleUniform = 1.00f;
    this->Size_ScaleByVelocity = 1.00f;
    this->CullDistance = 4000.00f;
}

void UWeather_PS_Component::Init_Weather_PS_Component_Implementation() {
}

void UWeather_PS_Component::DeActivateComponent_Implementation() {
}

void UWeather_PS_Component::ActivateComponent_Implementation() {
}


