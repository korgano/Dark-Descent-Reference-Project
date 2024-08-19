#include "SyntheticTrackingComponent.h"
#include "EnumSquadStatus.h"

USyntheticTrackingComponent::USyntheticTrackingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PostEncounterStatus = EnumSquadStatus::COVERT;
    this->ShowTrackOnMap = false;
}


