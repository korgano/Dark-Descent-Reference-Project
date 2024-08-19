#include "CosmeticCorpseHandlerComponent.h"

UCosmeticCorpseHandlerComponent::UCosmeticCorpseHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NbMaxCosmeticCorpse = 20;
}

void UCosmeticCorpseHandlerComponent::RegisterCosmeticCorpse(ACosmeticCorpseActor* NewCorpse) {
}

void UCosmeticCorpseHandlerComponent::OnCorpseDestroyed(AActor* Corpse) {
}


