#include "StepSFXVFXComponent.h"

UStepSFXVFXComponent::UStepSFXVFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterMouvementSFXDataAsset = NULL;
}

void UStepSFXVFXComponent::NewStepEvent_Implementation(EStepSide StepSide) {
}


