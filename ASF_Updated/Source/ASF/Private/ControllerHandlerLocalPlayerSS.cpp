#include "ControllerHandlerLocalPlayerSS.h"

UControllerHandlerLocalPlayerSS::UControllerHandlerLocalPlayerSS() {
    this->ControllerType = EnumControllerType::GAMEPAD;
}

void UControllerHandlerLocalPlayerSS::SetControllerType(EnumControllerType _newType) {
}

EnumControllerType UControllerHandlerLocalPlayerSS::GetControllerType() const {
    return EnumControllerType::GAMEPAD;
}


