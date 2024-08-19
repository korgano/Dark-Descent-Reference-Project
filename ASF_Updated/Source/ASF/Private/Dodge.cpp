#include "Dodge.h"

UDodge::UDodge() {
    this->LastTimeLaunch = 0.00f;
    this->Cooldown = 0.00f;
    this->DodgeProbability = 0.75f;
}

float UDodge::GetCooldown() const {
    return 0.0f;
}


