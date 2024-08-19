#include "Weather_Actor.h"

AWeather_Actor::AWeather_Actor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnRate = 0.00f;
    this->Opacity = 1.00f;
    this->EmissiveScale = 0.00f;
    this->Size_ScaleUniform = 1.00f;
    this->Size_ScaleByVelocity = 1.00f;
    this->CullDistance = 4000.00f;
    this->RenderBound_AutoSize = true;
}

void AWeather_Actor::Init_Weather_Actor_Implementation() {
}


