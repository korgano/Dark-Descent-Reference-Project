#include "AssignedAcknow.h"

FAssignedAcknow::FAssignedAcknow() {
    this->SpeakerID = 0;
    this->SpeakerTag = EnumAcknowSpeaker::NONE;
    this->Asset = NULL;
    this->WaitForSpeakerID = 0;
    this->WaitForAsset = NULL;
    this->FeedbackActor = NULL;
    this->PlaybackTime = 0.00f;
    this->PlaybackPercent = 0.00f;
    this->bBypassAbleToSpeakQuery = false;
    this->bAsyncLoading = false;
}

