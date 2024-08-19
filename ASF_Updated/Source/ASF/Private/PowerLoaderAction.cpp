#include "PowerLoaderAction.h"

FPowerLoaderAction::FPowerLoaderAction() {
    this->Activity = EPowerLoaderActivity::WAIT;
    this->actorParam = NULL;
    this->floatParam = 0.00f;
}

