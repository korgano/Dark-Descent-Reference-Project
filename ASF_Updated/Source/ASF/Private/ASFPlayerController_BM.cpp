#include "ASFPlayerController_BM.h"

AASFPlayerController_BM::AASFPlayerController_BM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->bHasInteractionInProgress = false;
    this->bIsTransitioning = false;
    this->PendingRoomSubMenuOptionIndex = 0;
}


void AASFPlayerController_BM::SetTransitioning_Implementation(bool bTransitioning) {
}

void AASFPlayerController_BM::SetHasInteractionInProgress(bool _bHasInteractionInProgress) {
}



bool AASFPlayerController_BM::HasInteractionInProgress() const {
    return false;
}





