#include "DataMove.h"

FDataMove::FDataMove() {
    this->Run = false;
    this->ErrorTolerance = 0.00f;
    this->bStartFromStatic = false;
    this->NavFilterClass = NULL;
    this->MovementType = EMovementTypeEnum::MOVE_IN_FORMATION;
}

