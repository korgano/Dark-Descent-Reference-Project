#include "InGameTutoWidget.h"

UInGameTutoWidget::UInGameTutoWidget() : UUserWidget(FObjectInitializer::Get()) {
}

UUserWidget* UInGameTutoWidget::GetButtonClose_Implementation() const {
    return NULL;
}


