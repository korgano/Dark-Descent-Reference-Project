#include "LockSpawnEffect.h"
#include "EnumStackingPolicy.h"

ULockSpawnEffect::ULockSpawnEffect() {
    this->Name = TEXT("Lock_SystemicSpawn");
    this->EffectsTagToApply.AddDefaulted(1);
    this->bNeedToBeSaved = true;
    this->StackingPolicy = EnumStackingPolicy::PARALLEL;
}


