#include "UIVisibilityComponent.h"

UUIVisibilityComponent::UUIVisibilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUIVisibilityComponent::UnhideWidgets(const TArray<EWidgetType>& _WidgetsToUnhide) {
}

void UUIVisibilityComponent::UnhideWidget(EWidgetType _WidgetToUnhide) {
}

bool UUIVisibilityComponent::IsWidgetVisible(EWidgetType _Widget) const {
    return false;
}

bool UUIVisibilityComponent::IsInteractionHighligted(UInteractiveComponent* _Comp) const {
    return false;
}

void UUIVisibilityComponent::HighlightWidget(EWidgetType _WidgetToHide, bool _bNewHighlight) {
}

void UUIVisibilityComponent::HighlightInteraction(UInteractiveComponent* _InteractiveComponent, bool _bNewHighlight) {
}

void UUIVisibilityComponent::HideWidgets(const TArray<EWidgetType>& _WidgetsToHide) {
}

void UUIVisibilityComponent::HideWidget(EWidgetType _WidgetToHide) {
}


