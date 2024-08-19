#include "FOWSaveLoadComponent.h"

UFOWSaveLoadComponent::UFOWSaveLoadComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveTypes.AddDefaulted(3);
}

void UFOWSaveLoadComponent::SaveFOW(FName _SubLevelName) {
}

void UFOWSaveLoadComponent::LoadFOW(FName _SubLevelName) {
}


