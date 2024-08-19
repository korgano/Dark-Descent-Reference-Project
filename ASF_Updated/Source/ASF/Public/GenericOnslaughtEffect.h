#pragma once
#include "CoreMinimal.h"
#include "EventBroadcastParams.h"
#include "OnslaughtEventBroadcastDelegateDelegate.h"
#include "OnslaughtStartDelegateDelegate.h"
#include "TMEvent_Effect.h"
#include "GenericOnslaughtEffect.generated.h"

class ATMEventSystem;
class UEvent_GenericOnslaught_DataAsset;

UCLASS(Blueprintable)
class ASF_API UGenericOnslaughtEffect : public UTMEvent_Effect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnslaughtStartDelegate OnOnslaughtStarted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEvent_GenericOnslaught_DataAsset* OnslaughtDataAsset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnslaughtEventBroadcastDelegate OnOnslaughtEventBroadcast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockAmbush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreviousAmbushLockState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreviousSpawnLockState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreviousAggressivenessLockState;
    
public:
    UGenericOnslaughtEffect();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartOnslaught();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEventSystemInitialized(ATMEventSystem* InEventSystem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStarted() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastEvent(FEventBroadcastParams& Params);
    
};

