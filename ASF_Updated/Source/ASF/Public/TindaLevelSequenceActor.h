#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "Event_TindaLevelSequence_LevelSequencePlayerDelegate.h"
#include "TindaLevelSequenceActor.generated.h"

class UCommonSaveLoadComponent;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class ASF_API ATindaLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayOnReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* SaveLoadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasBeenPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockGameplay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TindaLevelSequence_LevelSequencePlayer OnSequenceFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* Sequence;
    
    ATindaLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlaybackPositionSaved();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void OnSequencePlayed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BindCharacterIDs();
    
};

