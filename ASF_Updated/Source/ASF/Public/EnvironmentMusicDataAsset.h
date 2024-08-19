#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMusicPhase.h"
#include "MusicPhaseConfig.h"
#include "EnvironmentMusicDataAsset.generated.h"

class USoundCue;

UCLASS(Blueprintable)
class ASF_API UEnvironmentMusicDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMusicPhase, FMusicPhaseConfig> PhaseConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> MassiveOnslaughtBuildUpCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MassiveOnslaughtBuildUpCueTailDuration;
    
    UEnvironmentMusicDataAsset();

};

