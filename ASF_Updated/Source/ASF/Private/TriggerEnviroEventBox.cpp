#include "TriggerEnviroEventBox.h"
#include "CommonSaveLoadComponent.h"

ATriggerEnviroEventBox::ATriggerEnviroEventBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("CommonSaveLoadComponent"));
    this->bPlayNarrativeDialogueOnActivate = true;
    this->usable = true;
    this->ObjectiveToActivate = NULL;
    this->SubObjectiveAutoActivate = false;
    this->AlreadyUsed = false;
    this->NarrativeDialogueInitialDelay = 0.00f;
}

void ATriggerEnviroEventBox::SubLevelUnLoadedOrRemoved(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void ATriggerEnviroEventBox::SubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void ATriggerEnviroEventBox::SetNewUsable(bool newUsable) {
}

void ATriggerEnviroEventBox::OnSquadBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ATriggerEnviroEventBox::OnNarrativeDialogueInitialDelayExpired() {
}

void ATriggerEnviroEventBox::intern_CheckActivateTrigger(AObjective* Objective, USubObjectiveComponent* subobjective) {
}

void ATriggerEnviroEventBox::DoSomethingOnMarineTrigger_Implementation() {
}

bool ATriggerEnviroEventBox::CanBeTriggered_Implementation() {
    return false;
}


