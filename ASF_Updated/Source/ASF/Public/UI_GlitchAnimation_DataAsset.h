#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UI_GlitchAnimation_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UUI_GlitchAnimation_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackInitialDelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackInitialDelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackSpeedMax;
    
    UUI_GlitchAnimation_DataAsset();

};

