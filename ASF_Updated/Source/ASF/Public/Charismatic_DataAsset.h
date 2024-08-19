#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Charismatic_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UCharismatic_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StressHealPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StressHealThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BraveryBonus;
    
    UCharismatic_DataAsset();

};

