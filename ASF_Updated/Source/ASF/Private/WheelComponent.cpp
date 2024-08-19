#include "WheelComponent.h"

UWheelComponent::UWheelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInWheelMode = false;
}

void UWheelComponent::SetWheelMode(bool _bNewMode) {
}

bool UWheelComponent::IsInWheelMode() const {
    return false;
}


