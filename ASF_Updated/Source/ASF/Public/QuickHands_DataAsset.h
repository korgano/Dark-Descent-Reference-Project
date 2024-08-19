#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "QuickHands_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UQuickHands_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadDurationMultiplier;
    
    UQuickHands_DataAsset();

};

