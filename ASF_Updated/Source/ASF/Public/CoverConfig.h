#pragma once
#include "CoreMinimal.h"
#include "CoverConfig.generated.h"

class UEnvQuery;
class UPointOfInterest_DataAsset;

USTRUCT(BlueprintType)
struct FCoverConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterest_DataAsset* POI_CoverDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterest_DataAsset* POI_RoomCoverDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverAngle;
    
    ASF_API FCoverConfig();
};

