#include "SecurityCamera.h"

ASecurityCamera::ASecurityCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsCameraActive = false;
    this->OrderInUI = 0;
    this->bActionAuthorized = true;
    this->bButtonActivated = false;
    this->bDiscovered = false;
    this->bIsIndoorCamera = true;
    this->RenderTarget = NULL;
}

void ASecurityCamera::StopCamera_Implementation() {
}

void ASecurityCamera::StartCamera_Implementation() {
}

FTransform ASecurityCamera::GetCameraTransform_Implementation() const {
    return FTransform{};
}

void ASecurityCamera::AuthorizeCameraAction() {
}


