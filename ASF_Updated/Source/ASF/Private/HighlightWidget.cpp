#include "HighlightWidget.h"

UHighlightWidget::UHighlightWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->WidgetToHighlight = NULL;
    this->OriginalParent = NULL;
}

void UHighlightWidget::RemoveHighlight() {
}

bool UHighlightWidget::Init_Implementation(UWidget* _WidgetToHighlight) {
    return false;
}

UNamedSlot* UHighlightWidget::GetNamedSlot_Implementation() {
    return NULL;
}


