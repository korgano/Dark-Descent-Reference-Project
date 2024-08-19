#include "Translatable_Component.h"

UTranslatable_Component::UTranslatable_Component(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialDelay = 0.00f;
    this->InitialDelayDone = 0.00f;
    this->TransformDuration = 5.00f;
    this->CurrentTransformPercentage = 0.00f;
}

void UTranslatable_Component::TransformTick(float _DeltaTime) {
}

void UTranslatable_Component::StartTransform() {
}

void UTranslatable_Component::InitTransform() {
}


