#include "TMCameraViewWidget.h"

UTMCameraViewWidget::UTMCameraViewWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->cameraReference = NULL;
}

void UTMCameraViewWidget::Start_Implementation(ASecurityCamera* Camera) {
}

void UTMCameraViewWidget::CloseCameraViewFromBackButton_Implementation() {
}


