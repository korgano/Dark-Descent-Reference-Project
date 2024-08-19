#pragma once
#include "CoreMinimal.h"
#include "Event_DataAsset.h"
#include "LightInfo.h"
#include "Event_TheyCutThePower_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEvent_TheyCutThePower_DataAsset : public UEvent_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightInfo PostProcessIndirectLightingLightInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightInfo RedLightInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightInfo OffLightInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightInfo SkyLightInfo;
    
    UEvent_TheyCutThePower_DataAsset();

};

