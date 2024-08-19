#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "AvengerAttribute_DataAssets.generated.h"

UCLASS(Blueprintable)
class ASF_API UAvengerAttribute_DataAssets : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetributionGainMultiplier;
    
    UAvengerAttribute_DataAssets();

};

