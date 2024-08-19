#include "LoadingMenuWidget.h"

ULoadingMenuWidget::ULoadingMenuWidget() {
    this->State = ELoadMenuWidgetState::Load;
    this->bImportStarted = false;
}

void ULoadingMenuWidget::OnOpenImportDialogRequest_Implementation(int32 InSelectedSlot) {
}

void ULoadingMenuWidget::OnOpenImportDialog_Implementation() {
}

void ULoadingMenuWidget::OnCloseImportDialog_Implementation() {
}

void ULoadingMenuWidget::ImportPS4Slot(int32 PS4SlotIndex) {
}

bool ULoadingMenuWidget::HasPS4Saves() const {
    return false;
}

void ULoadingMenuWidget::HandleOnPS4SlotImported(bool bSuccess) {
}


