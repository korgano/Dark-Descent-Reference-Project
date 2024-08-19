#include "Activity_Idle.h"
#include "EnumActivityType.h"

UActivity_Idle::UActivity_Idle() {
    this->ActivityType = EnumActivityType::IDLE;
    this->bForceOwnerRender = false;
}


