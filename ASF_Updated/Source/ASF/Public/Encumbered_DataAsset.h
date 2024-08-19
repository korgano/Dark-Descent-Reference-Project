#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Encumbered_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEncumbered_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMultiplier;
    
    UEncumbered_DataAsset();

};

