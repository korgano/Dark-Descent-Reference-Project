#include "TextDecalComponent.h"

UTextDecalComponent::UTextDecalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DecalMaterial = NULL;
    this->LettersSet = NULL;
    this->SpaceWidth = 100.00f;
}

void UTextDecalComponent::SetDecalMaterial(UMaterialInterface* NewDecalMaterial) {
}

UMaterialInterface* UTextDecalComponent::GetDecalMaterial() const {
    return NULL;
}


