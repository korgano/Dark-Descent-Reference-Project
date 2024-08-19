#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BatchDetail.h"
#include "EGESaveType.h"
#include "ETriggerInfoOperator.h"
#include "GameplayEvent_EventDelegate.h"
#include "SavedActorInterface.h"
#include "TriggerInfoDetailed.h"
#include "GameplayEvent.generated.h"

class AMission;
class ATriggerObjectiveActor;
class UCommonSaveLoadComponent;
class UGameplayAction;
class UTriggerInfo;

UCLASS(Blueprintable)
class ASF_API AGameplayEvent : public AActor, public ISavedActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* CommonSaveLoadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTriggerInfo*> Triggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameplayAction*> GameplayActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NbActionEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<bool> TriggerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> GAStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMission* ParentMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ParentMissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATriggerObjectiveActor*> ScriptedEventArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PositionToTPSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETriggerInfoOperator TriggerInfoOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeededTriggerNumberWithOrOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasBeenSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGESaveType SaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTriggerInfoDetailed TriggerInfoSelectedForSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeRepeated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 nbRepeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasStartedLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector2D RandomTimeRangeForLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bNeedToTryTriggerInfoAfterLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCurrentlySavingAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float delayTriggerBeforeActivateGameplayAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEvent_Event OnGameplayEventActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEvent_Event OnGameplayEventEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasBeenActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBatchDetail> BatchToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> BatchIdAlreadyRemoved;
    
    AGameplayEvent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TPMarineIfNeeded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTriggerInfoTriggered(AMission* Mission, UTriggerInfo* TriggerInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayEventChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayActionStatusChanged(UGameplayAction* GameplayAction, int32 Status);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayActionEnded(UGameplayAction* GameplayAction);
    
    UFUNCTION(BlueprintCallable)
    void LoopGameplayEvent();
    
    UFUNCTION(BlueprintCallable)
    bool IsMarineNeedToBeTP(AActor* Marine);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndGameplayEvent();
    
    UFUNCTION(BlueprintCallable)
    void DoSave(bool _bForce);
    
    UFUNCTION(BlueprintCallable)
    void DelayedActivateGameplayEvent();
    
    UFUNCTION(BlueprintCallable)
    void ActivateGameplayEvent(bool ActivateFromSave);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool SavedActorInterface_IsInitialized() override PURE_VIRTUAL(SavedActorInterface_IsInitialized, return false;);
    
    UFUNCTION()
    void SavedActorInterface_BindOnInitialized() override PURE_VIRTUAL(SavedActorInterface_BindOnInitialized,);
    
};

