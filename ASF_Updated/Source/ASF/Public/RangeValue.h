#pragma once
#include "CoreMinimal.h"
#include "RangeValue.generated.h"

USTRUCT(BlueprintType)
struct FRangeValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    ASF_API FRangeValue();
};

