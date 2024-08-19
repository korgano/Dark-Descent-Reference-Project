#pragma once
#include "CoreMinimal.h"
#include "OutputPin_TaskDelegate.h"
#include "OutputPin_Task_FloatDelegate.h"
#include "Task.h"
#include "Task_GetAxisValue.generated.h"

class UObject;
class UTask_GetAxisValue;

UCLASS(Blueprintable)
class ASF_API UTask_GetAxisValue : public UTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutputPin_Task_Float AxisValue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutputPin_Task OnTaskInitialized;
    
    UTask_GetAxisValue();

protected:
    UFUNCTION(BlueprintCallable)
    void TickEvent();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTask_GetAxisValue* Task_GetAxisValue(const UObject* WorldContextObject, FName _AxisName, bool _bConsumeInput, bool _bTickWhenPaused);
    
};

