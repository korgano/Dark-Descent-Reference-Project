#include "InteractiveComponent_Heal.h"

UInteractiveComponent_Heal::UInteractiveComponent_Heal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentHealer = NULL;
    this->CurrentHealed = NULL;
}


