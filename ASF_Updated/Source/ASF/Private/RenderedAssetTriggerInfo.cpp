#include "RenderedAssetTriggerInfo.h"

URenderedAssetTriggerInfo::URenderedAssetTriggerInfo() {
    this->TriggerLabel = TEXT("Default__RenderedAssetTriggerInfo");
    this->bRenderedInTrueSight = true;
}

void URenderedAssetTriggerInfo::TickEvent(float X) {
}

void URenderedAssetTriggerInfo::OnTwinUnLink(AGameplayTwinActor* GameplayTwinActor) {
}

void URenderedAssetTriggerInfo::OnTwinLink(AGameplayTwinActor* GameplayTwinActor) {
}


