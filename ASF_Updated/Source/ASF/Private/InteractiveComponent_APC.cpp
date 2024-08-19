#include "InteractiveComponent_APC.h"

UInteractiveComponent_APC::UInteractiveComponent_APC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAutoTimer = false;
    this->DistMaxFromCharacterToInteractionToEnableComponent = 1000.00f;
}

bool UInteractiveComponent_APC::IsCharacterCloseEnough_Implementation(AActor* _Actor) {
    return false;
}


