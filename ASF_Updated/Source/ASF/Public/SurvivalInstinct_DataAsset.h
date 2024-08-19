#pragma once
#include "CoreMinimal.h"
#include "Trait_DataAsset.h"
#include "SurvivalInstinct_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API USurvivalInstinct_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BraveryMultiplier;
    
    USurvivalInstinct_DataAsset();

};

