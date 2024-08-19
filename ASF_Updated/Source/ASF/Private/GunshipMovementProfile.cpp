#include "GunshipMovementProfile.h"

FGunshipMovementProfile::FGunshipMovementProfile() {
    this->MaxSpeed = 0.00f;
    this->Acceleration = 0.00f;
    this->Deceleration = 0.00f;
    this->Break = 0.00f;
    this->RotationMaxSpeed = 0.00f;
    this->RotationAcceleration = 0.00f;
    this->RotationDeceleration = 0.00f;
    this->RotationBreak = 0.00f;
    this->PitchMax = 0.00f;
    this->PitchCoef = 0.00f;
    this->RollMax = 0.00f;
    this->RollCoef = 0.00f;
    this->TargetAltitude = 0.00f;
    this->VerticalMaxSpeed = 0.00f;
    this->VerticalAcceleration = 0.00f;
    this->VerticalDeceleration = 0.00f;
}

