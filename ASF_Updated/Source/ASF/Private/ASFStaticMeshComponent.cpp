#include "ASFStaticMeshComponent.h"

void UASFStaticMeshComponent::SetMeshSectionsFromProcedural(TArray<FProcMeshSection> NewProcMesh) {
}

//UASFStaticMeshComponent::UASFStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
UASFStaticMeshComponent::UASFStaticMeshComponent() {
    this->bOverrideAreaClass = false;
    this->TindaAreaClass = NULL;
}


