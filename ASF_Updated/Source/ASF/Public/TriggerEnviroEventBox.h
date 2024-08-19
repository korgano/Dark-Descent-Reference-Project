#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "AcknowsSequence.h"
#include "Event_ActorMarineaDelegate.h"
#include "SubLevelID.h"
#include "TriggerEnviroEventBox.generated.h"

class AActor;
class AObjective;
class ASubLevelHandler;
class UCommonSaveLoadComponent;
class USubObjectiveComponent;

UCLASS(Blueprintable)
class ASF_API ATriggerEnviroEventBox : public ATriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* SaveLoadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayNarrativeDialogueOnActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool usable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ActorMarinea OnMarineTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AObjective* ObjectiveToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> ObjectivesToActivateOnTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubObjectiveNameToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SubObjectiveAutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubLevelID LevelToActivateIfLinkedWithAnObjective;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool AlreadyUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAcknowsSequence NarrativeDialogueOnSquadOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NarrativeDialogueInitialDelay;
    
public:
    ATriggerEnviroEventBox(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SubLevelUnLoadedOrRemoved(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void SubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNewUsable(bool newUsable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSquadBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnNarrativeDialogueInitialDelayExpired();
    
    UFUNCTION(BlueprintCallable)
    void intern_CheckActivateTrigger(AObjective* Objective, USubObjectiveComponent* subobjective);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoSomethingOnMarineTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeTriggered();
    
};

