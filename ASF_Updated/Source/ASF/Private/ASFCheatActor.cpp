#include "ASFCheatActor.h"
#include "Tinda_EffectHandlerComponent.h"

AASFCheatActor::AASFCheatActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->bDisplayHitChance = false;
    this->bDisplayDodge = false;
    this->bDisplayRangeWeaponTrace = false;
    this->DisplayLeaderMovementLine = true;
    this->DisplayAllMarineMovementLine = false;
}


