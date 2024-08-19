#include "ActorInteractedComponent.h"

UActorInteractedComponent::UActorInteractedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayPriority = 0;
}

void UActorInteractedComponent::ToggleInteraction_Implementation(UInteractiveComponent* InteractiveComponent, bool bIsActivated) {
}

bool UActorInteractedComponent::IsInteractionAvailable_Implementation() {
    return false;
}

FString UActorInteractedComponent::GetName_Implementation() const {
    return TEXT("");
}

TSoftObjectPtr<UTexture2D> UActorInteractedComponent::GetIcon_Implementation() const {
    return NULL;
}


