#include "AI_POIPerception_Base.h"

UAI_POIPerception_Base::UAI_POIPerception_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseMultithreading = true;
    this->bUseWeapon = false;
    this->bUpdateSpotPhase = false;
    this->bUpdateNoticeEnemy = false;
    this->bRepathOnNavblockerUpdate = false;
    this->TargetingComponent = NULL;
    this->NavAreaClassDetection = NULL;
}

void UAI_POIPerception_Base::OnInfluenceMapUpdated(AInfluenceMapManager* _InfluenceMap) {
}

FGameplayTag UAI_POIPerception_Base::GetNavBlockerFactionTag() const {
    return FGameplayTag{};
}

void UAI_POIPerception_Base::ComputeRoomContainerInSight() {
}

void UAI_POIPerception_Base::ComputeNavBlockerSeen(UPOIDefaultContainer* _PerceptionResult, FGameplayTag NavBlockerTag) {
}

void UAI_POIPerception_Base::ComputeNavBlockerRemoved() {
}

void UAI_POIPerception_Base::ComputeNavBlockerAdded() {
}

void UAI_POIPerception_Base::AdditionnalSightPerceptionUpdate() {
}

void UAI_POIPerception_Base::AdditionnalRoomPerceptionUpdate() {
}


