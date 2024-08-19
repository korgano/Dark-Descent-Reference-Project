#pragma once
#include "CoreMinimal.h"
#include "UpgradeDataAssets.h"
#include "ExtraMine_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UExtraMine_DataAsset : public UUpgradeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraMineCount;
    
    UExtraMine_DataAsset();

};

