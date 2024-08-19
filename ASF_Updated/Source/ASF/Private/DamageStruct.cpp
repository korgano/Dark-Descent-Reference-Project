#include "DamageStruct.h"

FDamageStruct::FDamageStruct() {
    this->DamageMin = 0.00f;
    this->DamageMax = 0.00f;
    this->CanStopAction = false;
    this->DamageGiver = NULL;
    this->DamageDone = 0.00f;
    this->DamageImpact = 0.00f;
    this->CriticalChance = 0.00f;
    this->DismemberChance = 0.00f;
    this->ProjectileSpeed = 0.00f;
    this->ChanceToDismemberOnDeath = 0.00f;
}

