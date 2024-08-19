#pragma once
#include "CoreMinimal.h"
#include "Trait_DataAsset.h"
#include "PoorSight_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UPoorSight_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrecisionsMalus;
    
    UPoorSight_DataAsset();

};

