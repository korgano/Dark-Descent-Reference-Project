#include "ItemSpawned.h"
#include "Tinda_EffectHandlerComponent.h"
#include "DynamiqueSaveLoadComponent.h"

AItemSpawned::AItemSpawned(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
    this->DynamicSaveLoadComponent = CreateDefaultSubobject<UDynamiqueSaveLoadComponent>(TEXT("DynamiqueSaveLoadComponent"));
    this->InPowerLoaderId = -1;
}


