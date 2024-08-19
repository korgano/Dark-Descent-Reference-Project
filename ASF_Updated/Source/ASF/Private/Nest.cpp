#include "Nest.h"

ANest::ANest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeHatchedByHatchingEvent = true;
}

void ANest::OpenNestEggs() {
}

void ANest::OnEggOpen(AEgg* _egg) {
}

void ANest::OnEggDeath(AASFCharacter* _egg) {
}

bool ANest::IsNestDestroyed() const {
    return false;
}

void ANest::DestroyNest_Implementation() {
}

bool ANest::CanBeHatchedByHatchingEvent() const {
    return false;
}

void ANest::AddKillTheNestEffect() {
}

void ANest::AddEgg(AEgg* _egg) {
}


