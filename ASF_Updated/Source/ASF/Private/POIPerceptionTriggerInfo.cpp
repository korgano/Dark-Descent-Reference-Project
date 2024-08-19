#include "POIPerceptionTriggerInfo.h"

UPOIPerceptionTriggerInfo::UPOIPerceptionTriggerInfo() {
    this->TriggerLabel = TEXT("Default__POIPerceptionTriggerInfo");
    this->PerceptionConfig_DataAsset = NULL;
    this->POIComponent = NULL;
}

void UPOIPerceptionTriggerInfo::OnTwinLinked(AGameplayTwinActor* _TwinActor) {
}

void UPOIPerceptionTriggerInfo::OnTriggerPerceived(AMission* Mission, AActor* PerceiveGATrigger) {
}

void UPOIPerceptionTriggerInfo::EnablePOI(AActor* _Actor) {
}


