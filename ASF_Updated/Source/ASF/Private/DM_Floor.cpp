#include "DM_Floor.h"
#include "Tinda_EffectHandlerComponent.h"

ADM_Floor::ADM_Floor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->DelayBeforeExlposion = 0.00f;
}


