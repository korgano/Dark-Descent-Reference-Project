#include "AlienTargetingComponent.h"

UAlienTargetingComponent::UAlienTargetingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DynamicPOIContainer_Tags.AddDefaulted(3);
    this->Alien = NULL;
    this->AlienControler = NULL;
    this->bDebug = false;
}


