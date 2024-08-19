#pragma once
#include "CoreMinimal.h"
#include "UpgradeDataAssets.h"
#include "Morphine_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UMorphine_DataAsset : public UUpgradeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StressHeal;
    
    UMorphine_DataAsset();

};

