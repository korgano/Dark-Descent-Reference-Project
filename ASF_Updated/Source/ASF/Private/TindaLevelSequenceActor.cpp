#include "TindaLevelSequenceActor.h"
#include "CommonSaveLoadComponent.h"

ATindaLevelSequenceActor::ATindaLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldPlayOnReload = true;
    this->SaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("SaveLoadComponent"));
    this->bHasBeenPlayed = false;
    this->bBlockGameplay = false;
    this->Sequence = NULL;
}

void ATindaLevelSequenceActor::SetPlaybackPositionSaved() {
}

void ATindaLevelSequenceActor::Play() {
}

void ATindaLevelSequenceActor::OnSequencePlayed() {
}

bool ATindaLevelSequenceActor::BindCharacterIDs_Implementation() {
    return false;
}


