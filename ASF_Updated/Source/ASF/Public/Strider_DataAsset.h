#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Strider_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UStrider_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarineSpeedMultiplier;
    
    UStrider_DataAsset();

};

