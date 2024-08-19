#include "FOWActorVisibilityComponent.h"

UFOWActorVisibilityComponent::UFOWActorVisibilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Owner = NULL;
    this->TrackedComponent = NULL;
    this->bIsVisible = false;
    this->bIsDiscovered = false;
    this->bIsForceVisible = false;
    this->bMinimapUpdateOnly = false;
    this->bIsFOWBound = false;
    this->bDisableUpdate = false;
    this->bStaticObject = false;
    this->bAddSeenEffect = false;
    this->ActorLocationOverride = NULL;
}

void UFOWActorVisibilityComponent::UpdateComponentVisibility(AFOWRevertedManagerActor* FOWManager) {
}

void UFOWActorVisibilityComponent::UpdateAllFOWVisibility(AFOWRevertedManagerActor* FOWManager) {
}

void UFOWActorVisibilityComponent::RemoveSceneComponent(USceneComponent* _SceneComponent) {
}

EnumFOWVisionType UFOWActorVisibilityComponent::GetVisibilityType_Implementation(AFOWRevertedManagerActor* _FOWManager) const {
    return EnumFOWVisionType::UNSEEN;
}

void UFOWActorVisibilityComponent::ForceVisibility(bool _NewForcedVisibility) {
}

void UFOWActorVisibilityComponent::ChangeVisibility(bool _bNewVisibility) {
}

void UFOWActorVisibilityComponent::AddSceneComponents(const TArray<USceneComponent*>& _SceneComponents) {
}


