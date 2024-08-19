#include "Dodge_Dash.h"

UDodge_Dash::UDodge_Dash() {
    this->DashSpeed = 800.00f;
    this->ForwardModifier = 0.50f;
    this->SideModifier = 1.00f;
    this->MaxDistance = 300.00f;
    this->MinDistance = 150.00f;
    this->IdleProbability = 0.50f;
    this->IdleTime = 0.50f;
}


