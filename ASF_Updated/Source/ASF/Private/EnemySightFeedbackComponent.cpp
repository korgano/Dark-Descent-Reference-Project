#include "EnemySightFeedbackComponent.h"

UEnemySightFeedbackComponent::UEnemySightFeedbackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetectionTime = 0.00f;
    this->CurrentAlpha = 0.00f;
    this->PrevAlpha = 0.00f;
    this->AlphaSaved = 0.00f;
    this->TimerCpt = 0.00f;
    this->bFeedbackVisibility = true;
    this->bCinematicMode = false;
}

void UEnemySightFeedbackComponent::UpdateVisibility(bool _Visibility) {
}

void UEnemySightFeedbackComponent::UpdateDisplay_Implementation(float _DetectionValue, float _MaxDist, FVector _Dir, AActor* _Target, bool _SightLong) {
}

void UEnemySightFeedbackComponent::SetVisibilityFalse() {
}

void UEnemySightFeedbackComponent::OnCinematicActivationUpdated(AASFPlayerController* _pc, bool _Value) {
}

void UEnemySightFeedbackComponent::GetFeedbackCoordinate_Implementation(const AActor* _Target, FVector& _StartPosition, FVector& _EndPosition) {
}

void UEnemySightFeedbackComponent::EnableSightFeedback(bool IsFeedbackEnabled) {
}


