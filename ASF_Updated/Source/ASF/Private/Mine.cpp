#include "Mine.h"
#include "Tinda_EffectHandlerComponent.h"

AMine::AMine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
}

void AMine::Log_Explosion(const FString& _Log) {
}


