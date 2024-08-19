#include "EggTargetingComponent.h"

UEggTargetingComponent::UEggTargetingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DynamicPOIContainer_Tags.AddDefaulted(1);
    this->Egg = NULL;
}


