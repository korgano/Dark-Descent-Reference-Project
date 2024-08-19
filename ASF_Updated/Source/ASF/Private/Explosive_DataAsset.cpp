#include "Explosive_DataAsset.h"

UExplosive_DataAsset::UExplosive_DataAsset() {
    this->PDA_ExplosionDamage = NULL;
    this->ChanceToExploseOnProjectileHit = 0.10f;
    this->DelayBeforeExplosionOnInteraction = 0.10f;
    this->MinDelayBeforeExplosionMinOnRadiusExplosion = 0.10f;
    this->MaxDelayBeforeExplosionMinOnRadiusExplosion = 0.30f;
}


