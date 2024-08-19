#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "SharpShooter_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USharpShooter_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarineAccuracyBonus;
    
    USharpShooter_DataAsset();

};

