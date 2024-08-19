#include "WaypointComponent.h"

UWaypointComponent::UWaypointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UWaypointContainer_UserWidget* UWaypointComponent::GetWaypointContainer(const TSoftClassPtr<UWaypointArrow_UserWidget>& _ArrowWidgetClass) const {
    return NULL;
}

UWaypointContainer_UserWidget* UWaypointComponent::CreateWaypointContainer(const TSoftClassPtr<UWaypointArrow_UserWidget>& _ArrowWidgetClass) {
    return NULL;
}


