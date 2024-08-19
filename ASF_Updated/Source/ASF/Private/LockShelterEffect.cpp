#include "LockShelterEffect.h"
#include "EnumStackingPolicy.h"

ULockShelterEffect::ULockShelterEffect() {
    this->Name = TEXT("Lock_Shelter");
    this->EffectsTagToApply.AddDefaulted(1);
    this->bNeedToBeSaved = true;
    this->StackingPolicy = EnumStackingPolicy::PARALLEL;
}


