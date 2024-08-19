#include "GAMoveComponentToLocation.h"

UGAMoveComponentToLocation::UGAMoveComponentToLocation() {
    this->ActionLabel = TEXT("Move Component To Location");
    this->bIsUsableClass = true;
    this->DisplayName = TEXT("Move Component To Location");
    this->ComponentClass = NULL;
    this->UseMode = EMoveToLocation::TOACTOR;
    this->TransformActorReference = NULL;
    this->SetRotation = false;
}


