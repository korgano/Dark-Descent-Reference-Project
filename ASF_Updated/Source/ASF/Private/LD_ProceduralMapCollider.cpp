#include "LD_ProceduralMapCollider.h"
#include "ProceduralMeshComponent.h"

ALD_ProceduralMapCollider::ALD_ProceduralMapCollider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMesh"));
    this->ProceduralMesh = (UProceduralMeshComponent*)RootComponent;
}

void ALD_ProceduralMapCollider::GenerateParallelepiped(const TArray<FVector>& FaceA, const TArray<FVector>& FaceB) {
}


