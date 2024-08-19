#include "TriggerBoxTriggerInfo.h"

UTriggerBoxTriggerInfo::UTriggerBoxTriggerInfo() {
    this->TriggerLabel = TEXT("Default__TriggerBoxTriggerInfo");
    this->ID = 0;
    this->TriggerBoxType = ETriggerBoxType::TRIGGER;
    this->CheckPowerLoader = false;
    this->PowerloaderId = 0;
}

void UTriggerBoxTriggerInfo::OnSquadMemberRemoved(ASquad* Squad, AHumanoidMarine* Character) {
}

void UTriggerBoxTriggerInfo::OnSquadMemberAdded(ASquad* Squad, AHumanoidMarine* Character) {
}

void UTriggerBoxTriggerInfo::OnSquadCreated(AASFPlayerState* PlayerState, ASquad* Squad) {
}

void UTriggerBoxTriggerInfo::OnObjectiveActorLastLeft(ATriggerObjectiveActor* Trigger, AActor* Actor) {
}

void UTriggerBoxTriggerInfo::OnObjectiveActorFirstEntered(ATriggerObjectiveActor* Trigger, AActor* Actor) {
}

void UTriggerBoxTriggerInfo::OnObjectiveActorEntered(ATriggerObjectiveActor* Trigger, AActor* Actor) {
}

void UTriggerBoxTriggerInfo::OnCharaIdCreated(AASFGameStateBase* GameState, AActor* Actor) {
}

void UTriggerBoxTriggerInfo::InitTriggerInfoEarly_Implementation(AGameplayEvent* _GameplayEvent) {
}

void UTriggerBoxTriggerInfo::InitTriggerInfo_Implementation(AGameplayEvent* _GameplayEvent) {
}


