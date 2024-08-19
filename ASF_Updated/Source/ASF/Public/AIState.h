#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EnumStateShifting.h"
#include "EnumStateShiftingMode.h"
#include "Event_UAIState_BoolDelegate.h"
#include "Templates/SubclassOf.h"
#include "AIState.generated.h"

class AASFCharacter;
class AASFCharacterAIController;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UAIState : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UAIState_Bool OnStateTaskFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShiftingReason;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacterAIController* ASFController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTinda_Effect> StateEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRollback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeRollbacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> RefusedShiftingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePerceptionOnShifting;
    
public:
    UAIState();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateAIService(FGameplayTag _ConditionTag, UObject* _Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartAIService(FGameplayTag _ConditionTag, UObject* _Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShiftingOver(UObject* _Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Shifting(UObject* _Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAICondition(FGameplayTag _ConditionTag, bool _IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PerformAITask(FGameplayTag _ConditionTag, UObject* _Target, bool& _Delayed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PerformAICondition(FGameplayTag _ConditionTag, UObject* _Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitAIState(uint8 _EnumValue, AASFCharacter* _Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UTinda_Effect> GetStateEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOverridePerceptionOnShifting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetEnumValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndAIService(FGameplayTag _ConditionTag, UObject* _Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRollback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EnumStateShifting CanChangeState(FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode, bool _bIsCurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeRollbacked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AbortAITask(FGameplayTag _ConditionTag, UObject* _Target);
    
};

