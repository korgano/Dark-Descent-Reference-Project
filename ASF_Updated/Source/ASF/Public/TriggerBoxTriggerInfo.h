#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "ETriggerBoxType.h"
#include "TriggerInfo.h"
#include "TriggerBoxTriggerInfo.generated.h"

class AASFGameStateBase;
class AASFPlayerState;
class AActor;
class AGameplayEvent;
class AHumanoidMarine;
class ASquad;
class ATriggerObjectiveActor;

UCLASS(Blueprintable)
class ASF_API UTriggerBoxTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATriggerObjectiveActor*> TriggerObjectiveActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterIDName> SpecificCharacterIdToBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETriggerBoxType TriggerBoxType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckPowerLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerloaderId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TriggerActorsBindingIDs;
    
public:
    UTriggerBoxTriggerInfo();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberRemoved(ASquad* Squad, AHumanoidMarine* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberAdded(ASquad* Squad, AHumanoidMarine* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadCreated(AASFPlayerState* PlayerState, ASquad* Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveActorLastLeft(ATriggerObjectiveActor* Trigger, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveActorFirstEntered(ATriggerObjectiveActor* Trigger, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveActorEntered(ATriggerObjectiveActor* Trigger, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnCharaIdCreated(AASFGameStateBase* GameState, AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitTriggerInfoEarly_Implementation(AGameplayEvent* _GameplayEvent);
    
    UFUNCTION(BlueprintCallable)
    void InitTriggerInfo_Implementation(AGameplayEvent* _GameplayEvent);
    
};

