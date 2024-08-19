#include "Tinda_UserWidget.h"

UTinda_UserWidget::UTinda_UserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->IsClickBlockerWidget = false;
    this->ParentActor = NULL;
}

void UTinda_UserWidget::StopListeningForInputAxis(FName _AxisName) {
}

void UTinda_UserWidget::SetParentActor(AActor* _Parent) {
}


void UTinda_UserWidget::ListenForAxisEvent(FName Axis, FInputAxisDelegate func, bool bConsume) {
}

bool UTinda_UserWidget::IsCursorHoverClickBlockerWidget() {
    return false;
}

AActor* UTinda_UserWidget::GetParentActor() {
    return NULL;
}


