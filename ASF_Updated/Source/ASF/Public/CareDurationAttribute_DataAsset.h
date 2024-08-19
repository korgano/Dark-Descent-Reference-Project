#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "CareDurationAttribute_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UCareDurationAttribute_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CareDurationMultiplier;
    
    UCareDurationAttribute_DataAsset();

};

