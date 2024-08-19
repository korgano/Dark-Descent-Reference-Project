#include "AIActionGunship.h"

UAIActionGunship::UAIActionGunship() {
    this->Gunship = NULL;
    this->GunshipController = NULL;
}

AAIController_GunShip* UAIActionGunship::GetGunshipController() const {
    return NULL;
}

AGunship* UAIActionGunship::GetGunship() const {
    return NULL;
}


