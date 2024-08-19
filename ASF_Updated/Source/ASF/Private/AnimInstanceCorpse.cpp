#include "AnimInstanceCorpse.h"

UAnimInstanceCorpse::UAnimInstanceCorpse() {
    this->bIsFlipped = false;
    this->IdVariation = 0;
    this->FadeInSequencerTime = 0.20f;
    this->FadeOutSequencerTime = 0.20f;
    this->FadeOutSequencerTimeDelayed2Frames = 0.20f;
    this->bIsDeadPoseSetup = false;
    this->bNoDeadPoseExisting = false;
    this->bIsLooted = false;
}

void UAnimInstanceCorpse::StopLoot_Implementation(bool bSuccess) {
}

void UAnimInstanceCorpse::StartLoot_Implementation() {
}

void UAnimInstanceCorpse::OnDeadPoseSetup() {
}

bool UAnimInstanceCorpse::GetIsLooted() const {
    return false;
}

int32 UAnimInstanceCorpse::GenerateIdVariation_Implementation() {
    return 0;
}


