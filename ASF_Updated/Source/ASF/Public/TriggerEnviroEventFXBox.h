#pragma once
#include "CoreMinimal.h"
#include "TriggerBoxFXData.h"
#include "TriggerEnviroEventBox.h"
#include "TriggerEnviroEventFXBox.generated.h"

UCLASS(Blueprintable)
class ASF_API ATriggerEnviroEventFXBox : public ATriggerEnviroEventBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeSequenceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTriggerBoxFXData> PlayedFXOnTrigger;
    
public:
    ATriggerEnviroEventFXBox(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TestFXSequence();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSequenceStartTimerExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnFXActorStopTimerExpired(FTriggerBoxFXData& FXData);
    
    UFUNCTION(BlueprintCallable)
    void OnFXActorStartTimerExpired(FTriggerBoxFXData& FXData);
    
};

