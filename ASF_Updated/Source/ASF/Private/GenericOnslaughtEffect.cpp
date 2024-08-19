#include "GenericOnslaughtEffect.h"

UGenericOnslaughtEffect::UGenericOnslaughtEffect() {
    this->OnslaughtDataAsset = NULL;
    this->bLockAmbush = true;
    this->bPreviousAmbushLockState = false;
    this->bPreviousSpawnLockState = false;
    this->bPreviousAggressivenessLockState = false;
}

bool UGenericOnslaughtEffect::StartOnslaught_Implementation() {
    return false;
}

void UGenericOnslaughtEffect::OnEventSystemInitialized_Implementation(ATMEventSystem* InEventSystem) {
}

bool UGenericOnslaughtEffect::HasStarted() const {
    return false;
}

void UGenericOnslaughtEffect::BroadcastEvent(FEventBroadcastParams& Params) {
}


