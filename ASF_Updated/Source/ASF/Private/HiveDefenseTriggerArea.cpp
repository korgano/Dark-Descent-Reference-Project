#include "HiveDefenseTriggerArea.h"
#include "Components/BoxComponent.h"

AHiveDefenseTriggerArea::AHiveDefenseTriggerArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Hive Trigger Box Component"));
    this->TMEventSystem = NULL;
}

void AHiveDefenseTriggerArea::OnEventSystemSetOnGameMode(AASFGameModeBase_TacticalMode* GameMode, ATMEventSystem* EventSystem) {
}

void AHiveDefenseTriggerArea::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool dFromSweep, const FHitResult& SweepResult) {
}


