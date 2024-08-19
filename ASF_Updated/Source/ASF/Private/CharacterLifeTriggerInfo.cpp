#include "CharacterLifeTriggerInfo.h"

UCharacterLifeTriggerInfo::UCharacterLifeTriggerInfo() {
    this->TriggerLabel = TEXT("Default__CharacterLifeTriggerInfo");
    this->LifeThreshold = 0.00f;
    this->CharacterTrigger = NULL;
}

void UCharacterLifeTriggerInfo::OnLifeChange(AActor* ActorWounded, const FDamageResultStruct& Damage) {
}

void UCharacterLifeTriggerInfo::BindEventToCharacter(AASFGameStateBase* GameState, AActor* Actor) {
}


