#pragma once
#include "CoreMinimal.h"
#include "MarineAttributeDataAssets.h"
#include "RoboticExpert_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API URoboticExpert_DataAsset : public UMarineAttributeDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbResourceNeeded;
    
    URoboticExpert_DataAsset();

};

