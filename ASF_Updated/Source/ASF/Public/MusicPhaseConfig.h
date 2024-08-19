#pragma once
#include "CoreMinimal.h"
#include "MusicPhaseConfig.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FMusicPhaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> Cue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntensityParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomBoolParamCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRandomBoolParamTrueValues;
    
    ASF_API FMusicPhaseConfig();
};

