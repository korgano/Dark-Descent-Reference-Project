#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "EnumActionStatus.h"
#include "Event_AIActionComponentDelegate.h"
#include "MarinesAIActionComponent.generated.h"

class AHumanoidTactical;
class UAIAction;
class UAction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UMarinesAIActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIAction*> AIActions_Available;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UAIAction>> AIActionsClass_Available;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AIActionComponent OnAIActionComponentInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidTactical* Humanoid;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIAction* CurrentAIAction;
    
public:
    UMarinesAIActionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UAction* StartStateAction();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAIAction(UAIAction* _CurrentAIAction);
    
    UFUNCTION(BlueprintCallable)
    void OnActionEnded(UAction* Action, EnumActionStatus ActionStatus);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitActions(AHumanoidTactical* _Humanoid);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIAction* GetCurrentAIAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CurrentActionOngoing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ActionSelected();
    
};

