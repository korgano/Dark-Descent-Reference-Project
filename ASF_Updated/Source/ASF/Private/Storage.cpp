#include "Storage.h"
#include "Tinda_EffectHandlerComponent.h"

AStorage::AStorage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectHandlerComponent = CreateDefaultSubobject<UTinda_EffectHandlerComponent>(TEXT("EffectHandlerComponent"));
}

void AStorage::SetAnimPlayRate_Implementation(float PlayRate) {
}

void AStorage::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void AStorage::OnActiveInteractionChanged(UInteractiveComponent* _InteractiveComponent) {
}

void AStorage::GetCharacterMeshes(TArray<USkeletalMeshComponent*>& SKList, AASFCharacter* Character) {
}


