#include "InteractiveComponent_Search.h"

UInteractiveComponent_Search::UInteractiveComponent_Search(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bForceDisplayButton = false;
    this->HasSearch = false;
    this->NbRandomItemToRecover = 0;
    this->ChanceToFindNothing = 0.00f;
    this->EndWithClose = false;
    this->DisplayLootAfterInteraction = false;
    this->bIsInfinite = false;
}

void UInteractiveComponent_Search::UpdateGUI_Implementation() {
}

bool UInteractiveComponent_Search::OwnerIsInteractible() {
    return false;
}

void UInteractiveComponent_Search::OnListenTagInactive(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

USkeletalMeshComponent* UInteractiveComponent_Search::GetCorpseMesh_Implementation() {
    return NULL;
}

void UInteractiveComponent_Search::AddLootTag_Implementation(bool _HasSearch) {
}


