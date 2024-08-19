#include "RoomInGame.h"
#include "Tinda_EffectHandlerComponent.h"

ARoomInGame::ARoomInGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandler = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
}


