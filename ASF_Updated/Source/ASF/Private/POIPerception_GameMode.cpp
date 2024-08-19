#include "POIPerception_GameMode.h"
#include "Templates/SubclassOf.h"

UPOIPerception_GameMode::UPOIPerception_GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClusterFilter = NULL;
}

void UPOIPerception_GameMode::SetClusterFilter(TSubclassOf<URoomClusterFilter> _ClusterFilter) {
}

UPOIDefaultContainer* UPOIPerception_GameMode::FindSquadMarineOutSafeZone() {
    return NULL;
}

UPOIDefaultContainer* UPOIPerception_GameMode::FindEnemiesInSafeZone() {
    return NULL;
}

UPOIDefaultContainer* UPOIPerception_GameMode::FindAvailableSpawnPoint(FGameplayTag _PerceptionSense, EnumPOIResearchType _RunMode) {
    return NULL;
}


