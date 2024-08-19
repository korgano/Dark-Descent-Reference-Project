#include "SequenceMapper.h"

ASequenceMapper::ASequenceMapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SequenceActor = NULL;
    this->SequencePlayer = NULL;
}

void ASequenceMapper::StopCurrentSequence() {
}

void ASequenceMapper::PlaySequence_Implementation(FName _Name, bool _RandomStartTime) {
}

void ASequenceMapper::PlaybackFinished_Implementation() {
}


