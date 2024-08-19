#include "VoiceManager.h"

AVoiceManager::AVoiceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AVoiceManager::OnVoiceAudioFinished(UASFAudioComponent* ASFAudioComponent) {
}

UASFAudioComponent* AVoiceManager::GetSpeakerVoiceComponent(int32 _SpeakerID) const {
    return NULL;
}


