#include "AlienDamageReceiverComponent.h"
#include "KillModule_Alien.h"

UAlienDamageReceiverComponent::UAlienDamageReceiverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseImpactReaction = true;
    this->KillModuleClass = UKillModule_Alien::StaticClass();
}


