#include "MapFeedbackDataComponent.h"

UMapFeedbackDataComponent::UMapFeedbackDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoAddFeedback = true;
    this->bIsMotionTrackerFeedback = false;
    this->bIsFeedbackedOnlyOnMovement = false;
    this->bIsInMotionTracker = false;
}

void UMapFeedbackDataComponent::UpdateMinimapData(AMinimapHandler* MinimapHandler) {
}

void UMapFeedbackDataComponent::SetOpenDataProperties(TSoftClassPtr<UMapFeedbackDataProperties> Properties) {
}

void UMapFeedbackDataComponent::RemoveMovingObject() {
}

void UMapFeedbackDataComponent::OnMinimapHandlerSet(AASFPlayerController* _ASFPlayerController, AMinimapHandler* _MinimapHandler) {
}

void UMapFeedbackDataComponent::GetMovingObjectProperties(UMapFeedbackDataProperties*& _OpenDataProperties) {
}

bool UMapFeedbackDataComponent::GetIsInMotionTracker() const {
    return false;
}

void UMapFeedbackDataComponent::ChangeMotionTrackingSettings(bool _bIsMotionTrackerFeedback, bool _bIsFeedbackedOnlyOnMovement) {
}

void UMapFeedbackDataComponent::AddMovingObject() {
}


