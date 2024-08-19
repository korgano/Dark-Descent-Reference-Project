#include "UMGSlateWindowComponent.h"

UUMGSlateWindowComponent::UUMGSlateWindowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->slateUI = NULL;
    this->SlateWindowManager = NULL;
    this->bIsMultiCameraWindowInit = false;
    this->createdWidget = NULL;
}

void UUMGSlateWindowComponent::UpdateSlateWindow(const TArray<int32>& camreraID, const TArray<UTextureRenderTarget2D*>& cameraTexture, FVector2D cameraResolution) {
}

void UUMGSlateWindowComponent::SetManager(AUMGSlateWindowManager* slateManager) {
}

void UUMGSlateWindowComponent::ResetLocalVariable() {
}

void UUMGSlateWindowComponent::InitSlateWindow(const TArray<int32>& camreraID, const TArray<UTextureRenderTarget2D*>& cameraTexture, UTexture2D* SignalLostTexture, FVector2D cameraResolution) {
}

void UUMGSlateWindowComponent::DestroyComponent_Internal() {
}


