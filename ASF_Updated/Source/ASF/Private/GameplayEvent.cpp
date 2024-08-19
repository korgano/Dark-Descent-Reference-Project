#include "GameplayEvent.h"
#include "CommonSaveLoadComponent.h"

AGameplayEvent::AGameplayEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CommonSaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("CommonSaveLoadComponent"));
    this->NbActionEnd = 0;
    this->ParentMission = NULL;
    this->Sequence = 0;
    this->Index = 0;
    this->PositionToTPSquad = NULL;
    this->TriggerInfoOperator = ETriggerInfoOperator::AND;
    this->NeededTriggerNumberWithOrOperator = 1;
    this->bHasBeenSaved = false;
    this->SaveType = EGESaveType::NO_SAVE;
    this->bCanBeRepeated = false;
    this->nbRepeat = -1;
    this->bLoop = false;
    this->bHasStartedLoop = false;
    this->bNeedToTryTriggerInfoAfterLoad = false;
    this->bIsCurrentlySavingAtEnd = false;
    this->bCanBeActivated = true;
    this->delayTriggerBeforeActivateGameplayAction = 0.00f;
    this->bHasBeenActivated = false;
    this->bHasEnded = false;
}

void AGameplayEvent::TPMarineIfNeeded() {
}

void AGameplayEvent::OnTriggerInfoTriggered_Implementation(AMission* Mission, UTriggerInfo* TriggerInfo) {
}

void AGameplayEvent::OnGameplayEventChanged() {
}

void AGameplayEvent::OnGameplayActionStatusChanged(UGameplayAction* GameplayAction, int32 Status) {
}

void AGameplayEvent::OnGameplayActionEnded(UGameplayAction* GameplayAction) {
}

void AGameplayEvent::LoopGameplayEvent() {
}

bool AGameplayEvent::IsMarineNeedToBeTP(AActor* Marine) {
    return false;
}

void AGameplayEvent::EndGameplayEvent_Implementation() {
}

void AGameplayEvent::DoSave(bool _bForce) {
}

void AGameplayEvent::DelayedActivateGameplayEvent() {
}

void AGameplayEvent::ActivateGameplayEvent(bool ActivateFromSave) {
}


