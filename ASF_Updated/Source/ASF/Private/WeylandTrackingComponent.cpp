#include "WeylandTrackingComponent.h"
#include "EnumSquadStatus.h"

UWeylandTrackingComponent::UWeylandTrackingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PostEncounterStatus = EnumSquadStatus::COVERT;
    this->ShowTrackOnMap = false;
}


