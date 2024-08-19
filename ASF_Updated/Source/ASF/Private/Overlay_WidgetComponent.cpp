#include "Overlay_WidgetComponent.h"

UOverlay_WidgetComponent::UOverlay_WidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WidgetHovered = NULL;
    this->DisplayInteractionOnOverlay = true;
    this->bIsOpen = false;
}

void UOverlay_WidgetComponent::UnDisplayInteractions_Implementation() {
}

void UOverlay_WidgetComponent::TryClose_Implementation(AActor* _NewTarget) {
}

void UOverlay_WidgetComponent::SetWidgetHover(UWidget* _Widget) {
}

TArray<UWidget*> UOverlay_WidgetComponent::GetInteractionWidgets_Implementation() {
    return TArray<UWidget*>();
}

TArray<UWidget*> UOverlay_WidgetComponent::GetDirecivesWidgets_Implementation() {
    return TArray<UWidget*>();
}

void UOverlay_WidgetComponent::DisplayInteractions_Implementation() {
}

void UOverlay_WidgetComponent::ConcurentWidgetChanged(AASFPlayerControllerTactical* _ASFPlayerController, EConcurentWidget OldWidget, EConcurentWidget NewWidget) {
}


