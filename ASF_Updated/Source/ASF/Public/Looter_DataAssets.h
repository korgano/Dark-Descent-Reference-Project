#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Looter_DataAssets.generated.h"

UCLASS(Blueprintable)
class ASF_API ULooter_DataAssets : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootBonus;
    
    ULooter_DataAssets();

};

