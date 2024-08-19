#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Mine_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UMine_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MineCount;
    
    UMine_DataAsset();

};

