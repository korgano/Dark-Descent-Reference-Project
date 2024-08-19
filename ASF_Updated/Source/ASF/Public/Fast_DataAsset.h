#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Fast_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UFast_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityPercentBonus;
    
    UFast_DataAsset();

};

