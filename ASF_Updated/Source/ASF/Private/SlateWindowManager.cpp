#include "SlateWindowManager.h"

ASlateWindowManager::ASlateWindowManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ASlateWindowManager::ReleaseScreen(int32 Monitor) {
}

void ASlateWindowManager::InitMonitorInfo() {
}

int32 ASlateWindowManager::GetAndTakeFreeScreen() {
    return 0;
}

void ASlateWindowManager::ActivateRenderingCamera(const TArray<int32>& camreraID, bool IsActivated) {
}


