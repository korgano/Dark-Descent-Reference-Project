#include "APC_Weapon_DataAsset.h"

UAPC_Weapon_DataAsset::UAPC_Weapon_DataAsset() {
    this->Precision = 100.00f;
    this->Dispersion = 0.00f;
    this->RangeMax_Firing = 3000.00f;
    this->RangeMin_Firing = 700.00f;
    this->useGrenade = false;
    this->Delay_Firing = 0.00f;
    this->SoundFire = NULL;
    this->MuzzleTemplate = NULL;
    this->rotation_Speed = 1.00f;
    this->angleZMin = -180.00f;
    this->angleZMax = 180.00f;
}


