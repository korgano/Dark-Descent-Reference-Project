#include "AIGuardComponent.h"

UAIGuardComponent::UAIGuardComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GuardPath = NULL;
    this->RandomPatrolBehaviorTimer = 0.00f;
    this->Alien = NULL;
}


