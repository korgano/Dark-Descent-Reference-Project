#include "DarwinTrackingComponent.h"
#include "EnumSquadStatus.h"

UDarwinTrackingComponent::UDarwinTrackingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PostEncounterStatus = EnumSquadStatus::COVERT;
    this->ShowTrackOnMap = false;
}


