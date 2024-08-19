#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "SurgicalDevice_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USurgicalDevice_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealDurationMultiplier;
    
    USurgicalDevice_DataAsset();

};

