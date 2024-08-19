#include "DisplaySettingsWidget.h"

UDisplaySettingsWidget::UDisplaySettingsWidget() {
    this->MinResolutionScale = 0.10f;
    this->MaxResolutionScale = 1.00f;
}

bool UDisplaySettingsWidget::IsUsingPredefinedResolution(const FString& Format) const {
    return false;
}

bool UDisplaySettingsWidget::HasQualityMode() const {
    return false;
}

TArray<FString> UDisplaySettingsWidget::GetScreenResolutions() const {
    return TArray<FString>();
}

float UDisplaySettingsWidget::ComputeResolutionScale(const FString& Format) const {
    return 0.0f;
}


