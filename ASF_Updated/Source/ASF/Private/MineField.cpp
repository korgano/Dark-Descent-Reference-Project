#include "MineField.h"
#include "Tinda_EffectHandlerComponent.h"

AMineField::AMineField(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
}


