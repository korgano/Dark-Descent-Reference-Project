#include "InteractiveHoverComponent.h"

UInteractiveHoverComponent::UInteractiveHoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HasAlreadyTick = false;
    this->bIsEnabled = true;
    this->TickCheckAngleFrequency = 0.20f;
    this->InfraredGogglesCheckAngle = false;
    this->ASFPlayerController = NULL;
    this->DisplayInteractiveObjectByPlayer = true;
    this->OutlineHandler = NULL;
    this->CurrentHover = EnumHover::Count;
}

void UInteractiveHoverComponent::UpdateDisplayHover() {
}

void UInteractiveHoverComponent::TickCheckAngle() {
}

void UInteractiveHoverComponent::StopHoverDelayed() {
}

bool UInteractiveHoverComponent::ShouldDisplayHoverFeedback_Implementation() {
    return false;
}

void UInteractiveHoverComponent::SetUnHoveredActor() {
}

void UInteractiveHoverComponent::SetIsEnabled_Implementation(bool bEnabled) {
}

void UInteractiveHoverComponent::SetHoveredActorRenderValue(int32 _Value) {
}

void UInteractiveHoverComponent::RemoveAllHover() {
}

void UInteractiveHoverComponent::RefreshDisplayHover() {
}

void UInteractiveHoverComponent::OnEffectModification(UTinda_EffectHandlerComponent* EffectHandler, UTinda_Effect* Effect) {
}

void UInteractiveHoverComponent::OnCinematicModeChanged(AASFPlayerController* Controller, bool Value) {
}

bool UInteractiveHoverComponent::IsAskingHover(UObject* Ref, EnumHover HoverType) {
    return false;
}

UOutlinePPHandlerActorComponent* UInteractiveHoverComponent::GetOutlineHandler() {
    return NULL;
}

int32 UInteractiveHoverComponent::GetNbHover(EnumHover HoverType) const {
    return 0;
}

void UInteractiveHoverComponent::GetMeshComponentsToRenderHovered(TArray<UMeshComponent*>& _Res, AActor* _Actor) {
}

void UInteractiveHoverComponent::ForceNoHover() {
}

void UInteractiveHoverComponent::DisplayInteractiveObject(AASFPlayerController* Controller, bool bDisplayInteractiveObject) {
}

void UInteractiveHoverComponent::DisplayHoverFeedback_Implementation(bool bIsHovered, EnumHover HoverType) {
}

bool UInteractiveHoverComponent::ComponentCanBeHovered_Implementation(UActorComponent* ActorComponent) const {
    return false;
}

void UInteractiveHoverComponent::AskHover(bool B, UObject* Ref, EnumHover HoverType, bool _Force) {
}


