#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Greenhorn_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UGreenhorn_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarineAccuracyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarineBraveryMultiplier;
    
    UGreenhorn_DataAsset();

};

