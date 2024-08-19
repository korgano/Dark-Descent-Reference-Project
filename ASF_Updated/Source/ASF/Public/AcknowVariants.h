#pragma once
#include "CoreMinimal.h"
#include "AcknowVariants.generated.h"

class UAcknow_DataAsset;

USTRUCT(BlueprintType)
struct FAcknowVariants {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAcknow_DataAsset*> Variants;
    
    ASF_API FAcknowVariants();
};

