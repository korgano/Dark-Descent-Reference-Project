#include "LD_ST_Props.h"
#include "Components/StaticMeshComponent.h"

ALD_ST_Props::ALD_ST_Props(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}


