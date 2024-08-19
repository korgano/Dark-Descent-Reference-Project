#include "MapFeedbackUserWidget.h"

UMapFeedbackUserWidget::UMapFeedbackUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->FeedbackComponent = NULL;
    this->CanvasPanelSlot = NULL;
}

void UMapFeedbackUserWidget::OnFeedbackComponentActivationChanged(UMapFeedbackComponent* InFeedbackComponent, bool IsActivated) {
}


