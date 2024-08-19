#include "MapFeedbackComponent.h"

UMapFeedbackComponent::UMapFeedbackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsActivated = false;
    this->MapFeedbackTexture = NULL;
    this->bRevealInLineOfSight = false;
    this->bOnlyIfMoving = false;
    this->bOnlyInMotionTracker = false;
    this->bRevealInTrueSight = false;
    this->FeedbackType = EnumFeedbackType::OBJECTIVE;
    this->WidgetClass = NULL;
    this->bIsInit = false;
}

void UMapFeedbackComponent::SetSize(const FVector2D& NewSize) {
}

void UMapFeedbackComponent::InitMapFeedbackComponent(bool _bIsActivated, USlateBrushAsset* _MapFeedbackTexture, FLinearColor _Color, FVector2D _Size) {
}

TArray<UMapFeedbackComponent*> UMapFeedbackComponent::GetAllActivatedMapFeedbackComponents() {
    return TArray<UMapFeedbackComponent*>();
}

void UMapFeedbackComponent::DeactivateFeedbackComponent() {
}

void UMapFeedbackComponent::ActivateFeedbackComponent() {
}


