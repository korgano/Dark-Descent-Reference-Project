#include "ObjectiveRewardComponent.h"

UObjectiveRewardComponent::UObjectiveRewardComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsFinalRewardOfObjective = false;
    this->bIsFailReward = false;
    this->SequencerTwinActor = NULL;
    this->bBlockAcknowsDuringSequencer = true;
    this->XPPointsReward = 1;
}

void UObjectiveRewardComponent::RefractorTwin() {
}

void UObjectiveRewardComponent::OnSequencerFinished(ATindaLevelSequenceActor* TindaSequencer, ULevelSequencePlayer* SequencerPlayer) {
}

void UObjectiveRewardComponent::GiveReward() {
}

void UObjectiveRewardComponent::GiveDataPads_Implementation(const TArray<UDataPad_DataAsset*>& _DataPads) {
}

void UObjectiveRewardComponent::GiveAudioLog_Implementation(const TArray<UAudioLog_DataAsset*>& _AudioLogs) {
}


