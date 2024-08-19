#include "EnnemyTargetingComponent.h"

UEnnemyTargetingComponent::UEnnemyTargetingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsTickManagedByAnotherEntity = false;
    this->AsyncTick = false;
    this->USCM_POIContainer = NULL;
    this->EnemySightFeedbackComponent = NULL;
}


