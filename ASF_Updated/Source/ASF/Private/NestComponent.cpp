#include "NestComponent.h"

UNestComponent::UNestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bKillTheNestIsActive = false;
}

void UNestComponent::StartNestAttack() {
}

void UNestComponent::StartKillTheNest_Implementation() {
}


