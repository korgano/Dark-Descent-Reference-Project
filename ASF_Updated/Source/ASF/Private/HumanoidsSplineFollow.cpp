#include "HumanoidsSplineFollow.h"
#include "Templates/SubclassOf.h"

UHumanoidsSplineFollow::UHumanoidsSplineFollow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovementForward = false;
    this->MoveDuration = 2.00f;
    this->UpdateRate = 0.02f;
}

void UHumanoidsSplineFollow::ProjectLastSplinePointToNavigation(AHumanoidTactical* _HumanoidTactical, TSubclassOf<UNavigationQueryFilter> FilterClass) {
}

void UHumanoidsSplineFollow::AddHumanoidToSpline(AHumanoidTactical* _Humanoid, bool _Forward, bool _Crouch) {
}


