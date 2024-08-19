#pragma once
#include "CoreMinimal.h"
#include "UpgradeDataAssets.h"
#include "ContrabandStogie_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UContrabandStogie_DataAsset : public UUpgradeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StressHealAddition;
    
    UContrabandStogie_DataAsset();

};

