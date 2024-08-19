#include "CharacInteractionSubObjComp.h"

UCharacInteractionSubObjComp::UCharacInteractionSubObjComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanSave = true;
    this->InteractionTypeClass = NULL;
    this->ForceIsNarrativeInteraction = true;
    this->TargetInteractiveComponent = NULL;
    this->InteractionActivationStateBeforeObjective = false;
    this->InteractionNarrativeStateBeforeObjective = false;
    this->bAutoFocusObjectiveOnCompletion = true;
    this->bIsInteractionInit = false;
}

void UCharacInteractionSubObjComp::SaveOnInteractionStarted(UInteractiveComponent* _InteractiveComponent, EnumActionStatus _ActionStatus) {
}

void UCharacInteractionSubObjComp::OnInteractionStarted_Implementation(UInteractiveComponent* _InteractiveComponent, EnumActionStatus _ActionStatus) {
}

void UCharacInteractionSubObjComp::OnInteractionEnded_Implementation(UInteractiveComponent* _InteractiveComponent, EnumActionStatus _ActionStatus) {
}

void UCharacInteractionSubObjComp::OnInteractionDelayedAdded(AASFCharacter* Character, UInteractiveComponent* InteractiveComponent) {
}

void UCharacInteractionSubObjComp::OnCharacterDeath(AASFCharacter* _ActorKilled, const FDamageResultStruct& _DamageResult) {
}

void UCharacInteractionSubObjComp::OnActorDestroyed(AActor* _DestroyedActor) {
}

void UCharacInteractionSubObjComp::BindEventToActor(AASFGameStateBase* _GameState, AActor* _Actor) {
}


