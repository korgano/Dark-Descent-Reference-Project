#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Sprinter_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USprinter_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMultiplier;
    
    USprinter_DataAsset();

};

