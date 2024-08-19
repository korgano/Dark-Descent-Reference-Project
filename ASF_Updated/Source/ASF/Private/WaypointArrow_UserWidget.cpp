#include "WaypointArrow_UserWidget.h"

UWaypointArrow_UserWidget::UWaypointArrow_UserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Waypoint = NULL;
    this->WaypointDisplayType = EnumWaypointDisplayType::DEFAULT;
    this->CollisionChannel = ECC_WorldStatic;
    this->AngleToPlayer = 0.00f;
    this->DistanceToPlayer = 0.00f;
}

ESlateVisibility UWaypointArrow_UserWidget::UpdateVisibility_Implementation(bool _Visibility) {
    return ESlateVisibility::Visible;
}

bool UWaypointArrow_UserWidget::IsNextPointVisible(const FVector& _Start, const FVector& _End) const {
    return false;
}

void UWaypointArrow_UserWidget::InitWaypointArrow(AWaypoint* _Waypoint) {
}

EnumWaypointDisplayType UWaypointArrow_UserWidget::GetWaypointDisplayType() const {
    return EnumWaypointDisplayType::DEFAULT;
}

void UWaypointArrow_UserWidget::ComputeRotation_Implementation() {
}

FVector UWaypointArrow_UserWidget::ComputeIntermediateWaypoint() {
    return FVector{};
}

void UWaypointArrow_UserWidget::ComputeDistance() {
}

void UWaypointArrow_UserWidget::BeginWaypointArrowUpdate() {
}


