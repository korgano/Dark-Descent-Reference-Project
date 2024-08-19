#include "LocomotionAnimation.h"

FLocomotionAnimation::FLocomotionAnimation() {
    this->BaseAnim = NULL;
    this->StepTime = 0.00f;
    this->bCancelable = false;
    this->bCanTurn = false;
}

