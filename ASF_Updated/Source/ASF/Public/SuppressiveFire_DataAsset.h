#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "SuppressiveFire_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USuppressiveFire_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecisionLossByDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMultiplier;
    
    USuppressiveFire_DataAsset();

};

