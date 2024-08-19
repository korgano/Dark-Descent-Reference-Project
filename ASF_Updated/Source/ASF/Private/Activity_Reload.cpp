#include "Activity_Reload.h"
#include "EActivityAnimationType.h"
#include "EnumActivityType.h"

UActivity_Reload::UActivity_Reload() {
    this->ActivityType = EnumActivityType::RELOAD;
    this->AnimationType = EActivityAnimationType::RELOAD;
    this->Inventory = NULL;
}

float UActivity_Reload::GetReloadTime() const {
    return 0.0f;
}


