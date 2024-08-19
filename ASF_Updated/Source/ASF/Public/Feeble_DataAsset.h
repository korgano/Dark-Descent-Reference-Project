#pragma once
#include "CoreMinimal.h"
#include "Trait_DataAsset.h"
#include "Feeble_DataAsset.generated.h"

UCLASS(Blueprintable)
class ASF_API UFeeble_DataAsset : public UTrait_DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLifeMalus;
    
    UFeeble_DataAsset();

};

