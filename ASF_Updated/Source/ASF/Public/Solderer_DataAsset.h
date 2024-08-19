#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Solderer_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USolderer_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeldDurationMultiplier;
    
    USolderer_DataAsset();

};

