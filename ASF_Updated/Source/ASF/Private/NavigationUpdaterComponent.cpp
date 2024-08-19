#include "NavigationUpdaterComponent.h"
#include "Templates/SubclassOf.h"

UNavigationUpdaterComponent::UNavigationUpdaterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NeedNavAreaUpdate = false;
    this->NavAreaState = NULL;
    this->NavigationBoxComponent = NULL;
    this->GameMode = NULL;
    this->ActorRebuildingNavigation = NULL;
}

void UNavigationUpdaterComponent::UpdateNavigationState_Reconstruct(TSubclassOf<UNavArea> NewState, TSubclassOf<UNavArea> PreviousState) {
}

void UNavigationUpdaterComponent::UpdateNavigationState(TSubclassOf<UNavArea> NewState, TSubclassOf<UNavArea> PreviousState, bool _RebuildRoomGraph) {
}

void UNavigationUpdaterComponent::OnRoomClusterSet(ARoomCluster* _RoomCluster) {
}


void UNavigationUpdaterComponent::InitNavArea(ARoomCluster* _RoomCluster) {
}



