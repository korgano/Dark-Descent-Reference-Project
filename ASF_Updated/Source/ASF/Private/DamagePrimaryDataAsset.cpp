#include "DamagePrimaryDataAsset.h"

UDamagePrimaryDataAsset::UDamagePrimaryDataAsset() {
    this->DamageMin = 0.00f;
    this->DamageMax = 0.00f;
    this->CanStopAction = true;
    this->CriticalChance = 1.00f;
    this->DismemberChance = 1.00f;
    this->ChanceToDismemberOnDeath = 0.00f;
}