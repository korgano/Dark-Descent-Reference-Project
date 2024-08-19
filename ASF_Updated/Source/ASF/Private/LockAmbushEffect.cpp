#include "LockAmbushEffect.h"
#include "EnumStackingPolicy.h"

ULockAmbushEffect::ULockAmbushEffect() {
    this->Name = TEXT("Lock_Ambush");
    this->EffectsTagToApply.AddDefaulted(1);
    this->bNeedToBeSaved = true;
    this->StackingPolicy = EnumStackingPolicy::PARALLEL;
}


