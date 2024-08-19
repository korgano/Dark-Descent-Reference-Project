#include "DM_Wall.h"
#include "Tinda_EffectHandlerComponent.h"

ADM_Wall::ADM_Wall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->DelayBeforeExlposion = 0.00f;
}


