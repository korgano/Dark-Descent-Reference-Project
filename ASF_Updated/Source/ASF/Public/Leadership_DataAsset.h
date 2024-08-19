#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Leadership_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API ULeadership_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StressHealMinimumPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StressHealDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StressHealAmount;
    
    ULeadership_DataAsset();

};

