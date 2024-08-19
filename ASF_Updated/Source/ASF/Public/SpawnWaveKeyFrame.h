#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SpawnWaveKeyFrame.generated.h"

USTRUCT(BlueprintType)
struct FSpawnWaveKeyFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    ASF_API FSpawnWaveKeyFrame();
};

