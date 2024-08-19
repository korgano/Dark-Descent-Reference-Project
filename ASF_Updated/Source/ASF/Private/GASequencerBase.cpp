#include "GASequencerBase.h"

UGASequencerBase::UGASequencerBase() {
}

void UGASequencerBase::SetTrackEvalDisabled(UMovieSceneTrack* MovieSceneTrack, bool Value) {
}

void UGASequencerBase::SetLevelSequenceAsVolatile(ULevelSequence* Sequence) {
}

void UGASequencerBase::ProcessDoors(ALevelSequenceActor* LevelSequenceActor, bool EnableTick) {
}

void UGASequencerBase::LevelSequenceMaskAsChanged(ULevelSequence* Sequence) {
}

FTransform UGASequencerBase::GetCameraOrigin(ULevelSequence* Sequence, FMovieSceneObjectBindingID BindingID, bool& CameraFound) {
    return FTransform{};
}


