#include "UMGSlateWindowManager.h"

AUMGSlateWindowManager::AUMGSlateWindowManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SignalLostTexture = NULL;
}

void AUMGSlateWindowManager::UpdateAllWindow() {
}

void AUMGSlateWindowManager::RemoveSquadMemberCameraToWindows(int32 squadMemberID) {
}

void AUMGSlateWindowManager::ReleaseScreen(int32 Monitor) {
}

void AUMGSlateWindowManager::RefreshCameraCaptureRT() {
}

bool AUMGSlateWindowManager::IsSquadMemeberCameraOpen(int32 squadMemberID) {
    return false;
}

void AUMGSlateWindowManager::InitMonitorInfo() {
}

int32 AUMGSlateWindowManager::GetSquadMemberCameraWindowID(int32 squadMemberID) {
    return 0;
}

int32 AUMGSlateWindowManager::GetAndTakeFreeScreen() {
    return 0;
}

UTextureRenderTarget2D* AUMGSlateWindowManager::GenerateRenderTarget(FVector2D RTResolution) {
    return NULL;
}

void AUMGSlateWindowManager::AddSquadMemberCameraToWindow(int32 squadMemberID, UUMGSlateWindowComponent* Window) {
}

void AUMGSlateWindowManager::ActivateRenderingCamera(const TArray<int32>& camreraID, bool IsActivated) {
}


