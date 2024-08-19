#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Enduring_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UEnduring_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaDecreaseMultiplier;
    
    UEnduring_DataAsset();

};

