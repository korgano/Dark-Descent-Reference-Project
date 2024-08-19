#include "Tutorial.h"

FTutorial::FTutorial() {
    this->bActionRequired = false;
    this->bBypassOnGamepad = false;
    this->bAllowNavigation = false;
    this->bAllowNavigationAction = false;
    this->bExplicitHandling = false;
    this->bInstantClose = false;
    this->WidgetSlot = ETutorialWidgetSlot::NONE;
}

