#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Handy_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UHandy_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchDurationMultiplier;
    
    UHandy_DataAsset();

};

