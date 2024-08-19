#pragma once
#include "CoreMinimal.h"
#include "TriggerInfo.h"
#include "EndInfiniteWaveTriggerInfo.generated.h"

class AWaveSpawnerActor;
class UWaveSpawnerComponent;

UCLASS(Blueprintable)
class ASF_API UEndInfiniteWaveTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWaveSpawnerActor* WaveSpawnerActor;
    
public:
    UEndInfiniteWaveTriggerInfo();

protected:
    UFUNCTION(BlueprintCallable)
    void CheckWaveSpawner(UWaveSpawnerComponent* WaveSpawnerComponent);
    
};

