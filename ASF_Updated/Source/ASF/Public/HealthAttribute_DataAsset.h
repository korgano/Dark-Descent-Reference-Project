#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "HealthAttribute_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UHealthAttribute_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthIncrease;
    
    UHealthAttribute_DataAsset();

};

