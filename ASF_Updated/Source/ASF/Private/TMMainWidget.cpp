#include "TMMainWidget.h"

UTMMainWidget::UTMMainWidget() : UUserWidget(FObjectInitializer::Get()) {
}

void UTMMainWidget::ShowInventorySwap_Implementation(UInteractiveComponent_Search* SearchComponent) {
}


void UTMMainWidget::HideInventorySwap_Implementation() {
}

UUserWidget* UTMMainWidget::GetMarineCard_Implementation(AHumanoidMarine* Marine) const {
    return NULL;
}

UCanvasPanel* UTMMainWidget::GetBaseCanvasPanel_Implementation() {
    return NULL;
}

void UTMMainWidget::CloseInteractionMenu_Implementation() {
}

void UTMMainWidget::Cheat_SetMouseLocationWidget_Implementation(bool Display, APlayerController* PlayerController) {
}


