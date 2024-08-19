#include "SlateWindowComponent.h"

USlateWindowComponent::USlateWindowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlateWindowManager = NULL;
    this->bIsMultiCameraWindowInit = false;
}

void USlateWindowComponent::UpdateSlateWindow(const TArray<int32>& camreraID, TArray<UTextureRenderTarget*> cameraTexture, FVector2D cameraResolution) {
}

void USlateWindowComponent::SetManager(ASlateWindowManager* slateManager) {
}

void USlateWindowComponent::ResetLocalVariable() {
}

void USlateWindowComponent::InitSlateWindow(const TArray<int32>& camreraID, TArray<UTextureRenderTarget*> cameraTexture, UTexture2D* SignalLostTexture, FVector2D cameraResolution) {
}

void USlateWindowComponent::DestroyComponent_Internal() {
}

void USlateWindowComponent::ActivateRenderingCamera(const TArray<int32>& camreraID, bool IsActivated) {
}


