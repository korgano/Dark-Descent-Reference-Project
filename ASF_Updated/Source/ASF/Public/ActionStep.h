#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EnumActionCancelability.h"
#include "EnumActionStatus.h"
#include "Event_ActionStep_EnumActionStatusDelegate.h"
#include "ActionStep.generated.h"

class AActor;
class UAction;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UActionStep : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAction* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ActionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> ActionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* EffectApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumActionStatus ActionStepStatus;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ActionStep_EnumActionStatus OnActionStepStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ActionStep_EnumActionStatus OnActionStepPaused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ActionStep_EnumActionStatus OnActionStepEnded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumActionCancelability ActionCancelability;
    
public:
    UActionStep();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartActionStep();
    
    UFUNCTION(BlueprintCallable)
    void SetActionStepStatus(EnumActionStatus _ActionStepStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetActionCancelability(EnumActionCancelability _ActionCancelability);
    
    UFUNCTION(BlueprintCallable)
    void SetAction(UAction* _Action);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResumeActionStep();
    
    UFUNCTION(BlueprintCallable)
    void RemoveActionEffect(AActor* Humanoid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PauseActionStep();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumActionStatus GetActionStepStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumActionCancelability GetActionCancelability();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAction* GetAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndActionStep(EnumActionStatus _ActionStepStatus);
    
    UFUNCTION(BlueprintCallable)
    void AddActionEffect(UObject* _Source, AActor* Humanoid);
    
};

