#include "WeaponStatComponent.h"

UWeaponStatComponent::UWeaponStatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageMin = NULL;
    this->DamageMax = NULL;
    this->BurstDuration = NULL;
    this->NbBullet_Burst = NULL;
    this->NbBullet_FullAuto = NULL;
    this->AmmoCostPerFire = NULL;
    this->NbClipsUsedForReload = 0;
    this->MaxNbBulletInMagazine = NULL;
    this->ReloadTime = NULL;
    this->Range = NULL;
    this->Impact = NULL;
    this->CriticalChance = NULL;
    this->DismemberChance = NULL;
}


