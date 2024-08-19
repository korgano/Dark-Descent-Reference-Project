#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "CarryingCapacity_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UCarryingCapacity_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarryingCapacityAddition;
    
    UCarryingCapacity_DataAsset();

};

