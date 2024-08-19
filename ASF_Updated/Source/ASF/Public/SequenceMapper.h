#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Event_SequenceMapper_NameDelegate.h"
#include "SequenceMapper.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class ASF_API ASequenceMapper : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SequenceMapper_Name OnSequenceStarted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ULevelSequence*> Sequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* SequencePlayer;
    
public:
    ASequenceMapper(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopCurrentSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySequence(FName _Name, bool _RandomStartTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaybackFinished();
    
};

