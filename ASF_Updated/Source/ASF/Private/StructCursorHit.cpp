#include "StructCursorHit.h"

FStructCursorHit::FStructCursorHit() {
    this->ActorHit = NULL;
    this->FormationType = EFormationTypeEnum::TIGHT;
    this->MovementType = EMovementTypeEnum::MOVE_IN_FORMATION;
}

