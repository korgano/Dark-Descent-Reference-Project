#include "Retribution_DataAsset.h"

URetribution_DataAsset::URetribution_DataAsset() {
    this->GainPerDamage = 1.00f;
    this->GainPerStressStep = 3.00f;
    this->GainPerDeath = 2.00f;
    this->GainPerComa = 2.00f;
    this->TimeBetweenBurstMultiplier = 0.50f;
    this->BraveryBoost = 0.00f;
    this->CommandPointRegenDuration = 2.00f;
    this->RetributionMinValueToActivate = 1.00f;
    this->RetributionMaxDuration = 15.00f;
    this->LifeHealMin = 1;
    this->LifeHealMax = 2;
}


