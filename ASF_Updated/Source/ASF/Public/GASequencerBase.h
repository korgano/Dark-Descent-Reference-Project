#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneObjectBindingID.h"
#include "GameplayAction.h"
#include "GASequencerBase.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class UMovieSceneTrack;

UCLASS(Blueprintable)
class ASF_API UGASequencerBase : public UGameplayAction {
    GENERATED_BODY()
public:
    UGASequencerBase();

    UFUNCTION(BlueprintCallable)
    void SetTrackEvalDisabled(UMovieSceneTrack* MovieSceneTrack, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetLevelSequenceAsVolatile(ULevelSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    void ProcessDoors(ALevelSequenceActor* LevelSequenceActor, bool EnableTick);
    
    UFUNCTION(BlueprintCallable)
    static void LevelSequenceMaskAsChanged(ULevelSequence* Sequence);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetCameraOrigin(ULevelSequence* Sequence, FMovieSceneObjectBindingID BindingID, bool& CameraFound);
    
};

