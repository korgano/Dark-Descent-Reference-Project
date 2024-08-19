#include "CommonSaveLoadComponent.h"

UCommonSaveLoadComponent::UCommonSaveLoadComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveTypes.AddDefaulted(3);
}


