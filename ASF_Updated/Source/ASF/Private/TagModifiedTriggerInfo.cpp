#include "TagModifiedTriggerInfo.h"

UTagModifiedTriggerInfo::UTagModifiedTriggerInfo() {
    this->TriggerLabel = TEXT("Default__TagModifiedTriggerInfo");
}

void UTagModifiedTriggerInfo::OnTwinLink(AGameplayTwinActor* TwinActor) {
}

void UTagModifiedTriggerInfo::OnParentEventActivated(AGameplayEvent* Event) {
}

void UTagModifiedTriggerInfo::OnNeededTag(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void UTagModifiedTriggerInfo::OnForbiddenTag(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}


