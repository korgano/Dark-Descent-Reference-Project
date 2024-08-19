#include "EggPoolComponent.h"

UEggPoolComponent::UEggPoolComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionChannel = ECC_WorldStatic;
}

void UEggPoolComponent::RemoveEgg(AASFCharacter* EggToRemove) {
}

bool UEggPoolComponent::HasAnyEggs() const {
    return false;
}

TArray<AASFCharacter*> UEggPoolComponent::GetAllEggs() const {
    return TArray<AASFCharacter*>();
}

void UEggPoolComponent::EggsHaveToOpen() {
}

void UEggPoolComponent::AddEgg(AASFCharacter* NewEgg) {
}


