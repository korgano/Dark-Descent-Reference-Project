#include "Rat.h"
#include "StatComponent.h"

ARat::ARat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatComponent = CreateDefaultSubobject<UStatComponent>(TEXT("RatStatComponent"));
}


