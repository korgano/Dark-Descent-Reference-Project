#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CheckBoolDelegateDelegate.h"
#include "DelayOutputPinDelegate.h"
#include "DelayOutputPinRefDelegate.h"
#include "AsyncCheckLoopWithTimeout.generated.h"

class UAsyncCheckLoopWithTimeout;
class UObject;

UCLASS(Blueprintable)
class ASF_API UAsyncCheckLoopWithTimeout : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelayOutputPinRef GetReferenceAsyncAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelayOutputPin TruePin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelayOutputPin TimeoutPin;
    
    UAsyncCheckLoopWithTimeout();

private:
    UFUNCTION(BlueprintCallable)
    void TrueFunction();
    
    UFUNCTION(BlueprintCallable)
    void TimeoutFunction();
    
    UFUNCTION(BlueprintCallable)
    void SetBetweenChecksTimer();
    
    UFUNCTION(BlueprintCallable)
    bool ProcessConditionFunction();
    
    UFUNCTION(BlueprintCallable)
    void EndAsyncAction();
    
    UFUNCTION(BlueprintCallable)
    void ClearTimers();
    
    UFUNCTION(BlueprintCallable)
    void CheckCondition();
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncCheckLoopWithTimeout* AsyncCheckLoopWithTimeout(UObject* WorldContextObject, const FCheckBoolDelegate ConditionDelegate, const float DelayBetweenChecks, const float DelayTimeout);
    
};

