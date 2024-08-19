#include "PopUpWidgetTRC.h"

UPopUpWidgetTRC::UPopUpWidgetTRC() {
    this->DialogType = EASFDialogType::None;
    this->bShowCancelButton = false;
    this->bCancelPressed = false;
}


void UPopUpWidgetTRC::HandlePopUpClosing() {
}

bool UPopUpWidgetTRC::CanUnpause() const {
    return false;
}


