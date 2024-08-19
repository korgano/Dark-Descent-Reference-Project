#include "PerimeterDelimiterComponent.h"

UPerimeterDelimiterComponent::UPerimeterDelimiterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PerimeterTexture = NULL;
    this->Radius = 0.00f;
    this->bConvexGeneration = false;
    this->pixelSize = 10.00f;
}

void UPerimeterDelimiterComponent::GeneratePerimeterTexture() {
}


