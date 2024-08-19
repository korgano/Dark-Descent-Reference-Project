#include "Decoy.h"
#include "MarineStatComponent.h"

ADecoy::ADecoy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatComponent = CreateDefaultSubobject<UMarineStatComponent>(TEXT("DecoyStatComponent"));
    this->DataAsset = NULL;
    this->CombatComponent = NULL;
}


