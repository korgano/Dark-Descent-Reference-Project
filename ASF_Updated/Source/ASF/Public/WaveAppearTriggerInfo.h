#pragma once
#include "CoreMinimal.h"
#include "TriggerInfo.h"
#include "WaveAppearTriggerInfo.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASF_API UWaveAppearTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveIDAppeared;
    
    UWaveAppearTriggerInfo();

};

