#pragma once
#include "CoreMinimal.h"
#include "OutputPinDelegate.h"
#include "OutputPin_TaskDelegate.h"
#include "Task.h"
#include "Task_GetInputAction.generated.h"

class UObject;
class UTask_GetInputAction;

UCLASS(Blueprintable)
class ASF_API UTask_GetInputAction : public UTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutputPin_Task OnTaskInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutputPin OnActionPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutputPin OnActionReleased;
    
    UTask_GetInputAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTask_GetInputAction* Task_GetInputAction(const UObject* WorldContextObject, FName _ActionName, bool _bConsumeInput, bool _bTickWhenPaused);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReleasedEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedEvent();
    
};

