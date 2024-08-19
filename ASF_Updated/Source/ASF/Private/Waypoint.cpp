#include "Waypoint.h"
#include "DynamiqueSaveLoadComponent.h"

AWaypoint::AWaypoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WayPointContainer = NULL;
    this->WaypointArrow_UserWidget = NULL;
    this->DynamicSaveLoadComponent = CreateDefaultSubobject<UDynamiqueSaveLoadComponent>(TEXT("DynamicSaveLoadComponent"));
}

UWaypointContainer_UserWidget* AWaypoint::RequestNewContainer_Implementation(UWaypointComponent* _WaypointComponent) {
    return NULL;
}

UWaypointContainer_UserWidget* AWaypoint::GetWaypointContainer() const {
    return NULL;
}

UWaypointArrow_UserWidget* AWaypoint::GetWaypointArrow() const {
    return NULL;
}

UDynamiqueSaveLoadComponent* AWaypoint::GetDynamicSaveLoadComponent() const {
    return NULL;
}

UWaypointArrow_UserWidget* AWaypoint::CreateFeedbackArrow() {
    return NULL;
}


