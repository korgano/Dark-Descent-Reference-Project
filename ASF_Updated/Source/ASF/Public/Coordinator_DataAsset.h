#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "Coordinator_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UCoordinator_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireAtWillPrecisionLossMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortBurstPrecisionMultiplier;
    
    UCoordinator_DataAsset();

};

