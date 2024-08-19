#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "DamageResultStruct.h"
#include "EnumActionStatus.h"
#include "EnumActivityType.h"
#include "Event_ActivityDelegate.h"
#include "Templates/SubclassOf.h"
#include "ActivityManager.generated.h"

class AASFCharacter;
class AActor;
class UActivity;

UCLASS(Blueprintable)
class ASF_API UActivityManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Activity OnActivityStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Activity OnActivityEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Activity OnActivityAdded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UActivity*> ActivityQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisable;
    
public:
    UActivityManager();

    UFUNCTION(BlueprintCallable)
    void StopAllNextActivities();
    
    UFUNCTION(BlueprintCallable)
    void StopAllActivities();
    
    UFUNCTION(BlueprintCallable)
    void SetIsDisable(bool _bIsDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacter(AASFCharacter* _Character);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDeath(AASFCharacter* _ActorKilled, const FDamageResultStruct& _DamageResult);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActivityPaused(UActivity* _Activity, EnumActionStatus _Status);
    
    UFUNCTION(BlueprintCallable)
    void OnActivityEnded(UActivity* _Activity, EnumActionStatus _Status);
    
    UFUNCTION(BlueprintCallable)
    void InsertActivity(UActivity* _Activity, int32 _Position);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeActivityManager(AASFCharacter* _Character);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyCurrentActivityPrioritySupOrEqualThan(EnumActivityType _Type);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyCurrentActivityPriorityLowerThan(EnumActivityType _Type);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyActivity();
    
    UFUNCTION(BlueprintCallable)
    bool HasActivityOfClass(TSubclassOf<UActivity> _ActivityClass);
    
    UFUNCTION(BlueprintCallable)
    UActivity* GetCurrentActivity();
    
    UFUNCTION(BlueprintCallable)
    TArray<UActivity*> GetActivityQueue();
    
    UFUNCTION(BlueprintCallable)
    TArray<UActivity*> GetActivityOfClass(TSubclassOf<UActivity> _ActivityClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckNextActivity();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddActivity(UActivity* _Activity);
    
};

