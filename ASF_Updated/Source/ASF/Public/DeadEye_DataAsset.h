#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "DeadEye_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UDeadEye_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriticalChanceAdded;
    
    UDeadEye_DataAsset();

};

