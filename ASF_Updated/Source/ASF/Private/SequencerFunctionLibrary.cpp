#include "SequencerFunctionLibrary.h"

USequencerFunctionLibrary::USequencerFunctionLibrary() {
}

FString USequencerFunctionLibrary::GetSoundCueSoundWavePath(const USoundCue* SoundCue) {
    return TEXT("");
}

FString USequencerFunctionLibrary::GetSoundCueSoundWaveName(const USoundCue* SoundCue) {
    return TEXT("");
}

USoundClass* USequencerFunctionLibrary::GetSoundClassFromSoundCue(const USoundCue* SoundCue) {
    return NULL;
}

float USequencerFunctionLibrary::GetQualifiedFrameTimeAsSeconds(const FQualifiedFrameTime& QualifiedFrameTimeToConvert) {
    return 0.0f;
}

int32 USequencerFunctionLibrary::GetNodeCountFromSoundCue(const USoundCue* SoundCue) {
    return 0;
}

void USequencerFunctionLibrary::ExportSoundWave(const USoundCue* SoundCue, const FString& basepath) {
}


