#include "AssemblySTLDActor.h"
#include "AssemblyRootSceneComponent.h"

AAssemblySTLDActor::AAssemblySTLDActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAssemblyRootSceneComponent>(TEXT("AssemblyRoot"));
    this->AssemblyRoot = (UAssemblyRootSceneComponent*)RootComponent;
}

void AAssemblySTLDActor::RandomizeAssembly() {
}

TArray<UStaticMeshComponent*> AAssemblySTLDActor::CreateStaticAssemblyComponentFromInfo(const FAssemblyLDST& Info) {
    return TArray<UStaticMeshComponent*>();
}

UStaticMeshComponent* AAssemblySTLDActor::CreateMeshComponentFromInfo(const FAssemblyLDST& Info) {
    return NULL;
}

void AAssemblySTLDActor::ClearAssembly() {
}


