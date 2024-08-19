#include "AIActionHumanoid.h"

UAIActionHumanoid::UAIActionHumanoid() {
    this->Humanoid = NULL;
    this->HumanoidController = NULL;
}

AAiController_Humanoid* UAIActionHumanoid::GetHumanoidController() const {
    return NULL;
}

AHumanoidTactical* UAIActionHumanoid::GetHumanoid() const {
    return NULL;
}


