#pragma once
#include "CoreMinimal.h"
#include "PairFloat.generated.h"

USTRUCT(BlueprintType)
struct FPairFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float B;
    
    ASF_API FPairFloat();
};

