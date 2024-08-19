#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "TraumaHealAttribute_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UTraumaHealAttribute_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoHealDuration;
    
    UTraumaHealAttribute_DataAsset();

};

