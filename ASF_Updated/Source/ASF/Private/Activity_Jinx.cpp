#include "Activity_Jinx.h"
#include "EnumActivityType.h"

UActivity_Jinx::UActivity_Jinx() {
    this->ActivityType = EnumActivityType::RELOAD;
}

float UActivity_Jinx::GetReloadTime() const {
    return 0.0f;
}


