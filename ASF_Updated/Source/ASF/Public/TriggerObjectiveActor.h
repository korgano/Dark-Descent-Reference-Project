#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharacterIDName.h"
#include "Event_NoMulti_TriggerObjective_ActorDelegate.h"
#include "Event_TriggerObjective_ActorDelegate.h"
#include "SubLevelID.h"
#include "TriggerBoxBindingStruct.h"
#include "TriggerObjectiveActor.generated.h"

class AASFCharacter;
class AASFGameModeBase_TacticalMode;
class AASFGameStateBase;
class AASFGameState_TacticalMode;
class AItemSpawned;
class ASubLevelHandler;
class UCommonSaveLoadComponent;

UCLASS(Blueprintable)
class ASF_API ATriggerObjectiveActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* CommonSaveLoadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TriggerObjective_Actor OnTriggerBeginOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TriggerObjective_Actor OnTriggerEndOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubLevelID SubLevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName characterIDspawnedToAttach;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TriggerObjective_Actor OnAttachedToCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeTriggeredByDrone;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTriggerBoxBindingStruct> Bindings;
    
public:
    ATriggerObjectiveActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTriggerObjectiveActive(bool _bNewActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDelayOnItemSpawned(AASFGameState_TacticalMode* GameState, AItemSpawned* Item);
    
    UFUNCTION(BlueprintCallable)
    void SetDelayOnCharacterSpawned(AASFGameStateBase* GameState, AASFCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveBinding(int32 BindingID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorForBinding(int32 BindingID, AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ProcessActorLeave(AActor* _LeavingActor);
    
    UFUNCTION(BlueprintCallable)
    void ProcessActorEnter(AActor* _EnteringActor);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelHandlerLoad(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateItemSpawned(AASFGameState_TacticalMode* GameState, AItemSpawned* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateCharacterSpawned(AASFGameStateBase* GameState, AASFCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedActorDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedToBeAttached() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckToAttach();
    
    UFUNCTION(BlueprintCallable)
    int32 BindForActorWithLeave(AActor* ActorToBind, FEvent_NoMulti_TriggerObjective_Actor _EnterDelegate, FEvent_NoMulti_TriggerObjective_Actor _LeaveDelegate, FEvent_NoMulti_TriggerObjective_Actor _FirstEnterDelegate, FEvent_NoMulti_TriggerObjective_Actor _LastLeaveDelegate, bool bForceActivation);
    
    UFUNCTION(BlueprintCallable)
    int32 BindForActorsWithLeave(TArray<AActor*> ActorsToBind, FEvent_NoMulti_TriggerObjective_Actor _EnterDelegate, FEvent_NoMulti_TriggerObjective_Actor _LeaveDelegate, FEvent_NoMulti_TriggerObjective_Actor _FirstEnterDelegate, FEvent_NoMulti_TriggerObjective_Actor _LastLeaveDelegate, bool bForceActivation);
    
    UFUNCTION(BlueprintCallable)
    int32 BindForActorsIDsWithLeave(TArray<FCharacterIDName> ActorsToBind, FEvent_NoMulti_TriggerObjective_Actor _EnterDelegate, FEvent_NoMulti_TriggerObjective_Actor _LeaveDelegate, FEvent_NoMulti_TriggerObjective_Actor _FirstEnterDelegate, FEvent_NoMulti_TriggerObjective_Actor _LastLeaveDelegate, bool bForceActivation);
    
    UFUNCTION(BlueprintCallable)
    int32 BindForActorsID(TArray<FCharacterIDName> ActorsToBind, FEvent_NoMulti_TriggerObjective_Actor _Delegate, int32 MaxTrigger, bool bForceActivation);
    
    UFUNCTION(BlueprintCallable)
    int32 BindForActors(TArray<AActor*> ActorsToBind, FEvent_NoMulti_TriggerObjective_Actor _Delegate, int32 MaxTrigger, bool bForceActivation);
    
    UFUNCTION(BlueprintCallable)
    int32 BindForActor(AActor* ActorToBind, FEvent_NoMulti_TriggerObjective_Actor _Delegate, int32 MaxTrigger, bool bForceActivation);
    
    UFUNCTION(BlueprintCallable)
    void AttachToActorCharacterID(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddActorForBinding(int32 BindingID, AActor* Actor);
    
};

