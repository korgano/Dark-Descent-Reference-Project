#include "AIActionAlien.h"

UAIActionAlien::UAIActionAlien() {
    this->bStopMovement = true;
    this->Alien = NULL;
    this->AlienController = NULL;
}

AAIController_Alien* UAIActionAlien::GetAlienController() const {
    return NULL;
}

AAlien* UAIActionAlien::GetAlien() const {
    return NULL;
}


