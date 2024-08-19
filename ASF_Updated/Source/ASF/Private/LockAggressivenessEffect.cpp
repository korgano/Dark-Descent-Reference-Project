#include "LockAggressivenessEffect.h"
#include "EnumStackingPolicy.h"

ULockAggressivenessEffect::ULockAggressivenessEffect() {
    this->Name = TEXT("Lock_Aggressiveness");
    this->EffectsTagToApply.AddDefaulted(1);
    this->bNeedToBeSaved = true;
    this->StackingPolicy = EnumStackingPolicy::PARALLEL;
}


