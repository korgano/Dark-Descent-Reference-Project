#include "Missile_DataAsset.h"

UMissile_DataAsset::UMissile_DataAsset() {
    this->VelocityMax_Missile = 0.00f;
    this->AccelerationPercentage = 0.00f;
    this->InitialVelocity = 0.00f;
    this->RotationSpeed_Missile = 0.00f;
    this->DelayBeforeUpdateRotation = 0.00f;
    this->Sound_MissileLaunch = NULL;
    this->Sound_MissileExplosion = NULL;
}


