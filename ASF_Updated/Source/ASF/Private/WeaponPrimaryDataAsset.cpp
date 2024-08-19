#include "WeaponPrimaryDataAsset.h"

UWeaponPrimaryDataAsset::UWeaponPrimaryDataAsset() {
    this->DispersionAngleHorizontal = 5.00f;
    this->DispersionAngleVertical = 1.00f;
    this->WeaponPrecisionLossByDistance = 0.00f;
    this->WeaponPerception = NULL;
    this->DA_Damage_Weapon = NULL;
    this->BurstDuration = 0.00f;
    this->BurstVariation = 0.00f;
    this->NbBullet_Burst = 0.00f;
    this->NbBullet_FullAuto = 0.00f;
    this->AmmoCostPerFire = 1;
    this->NbClipsUsedForReload = 0;
    this->MaxNbBulletInMagazine = 0;
    this->ReloadTime = 0.00f;
    this->Range = 0.00f;
    this->Impact = 0.00f;
    this->WeaponImage = NULL;
    this->Sound_Firing = NULL;
    this->Sound_Firing_FadeOut = 0.30f;
    this->Sound_FireAtWill = NULL;
    this->Sound_NoAmmo = NULL;
    this->Sound_Reload = NULL;
    this->Sound_Reload_End = NULL;
}


