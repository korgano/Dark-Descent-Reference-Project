#include "MarineSpawnArea.h"
#include "Components/BoxComponent.h"

AMarineSpawnArea::AMarineSpawnArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->Box = (UBoxComponent*)RootComponent;
}


