#include "GunshipRoamArea.h"
#include "Components/BoxComponent.h"

AGunshipRoamArea::AGunshipRoamArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaTriggerComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Area Trigger"));
}

void AGunshipRoamArea::OnAreaTriggerOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

TArray<AGunshipRoamingSpline*> AGunshipRoamArea::GetRoamSplines() const {
    return TArray<AGunshipRoamingSpline*>();
}

AGunshipRoamingSpline* AGunshipRoamArea::GetRandomRoamSpline(AGunshipRoamingSpline* SplineToIgnore) const {
    return NULL;
}


