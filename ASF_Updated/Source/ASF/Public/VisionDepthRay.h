#pragma once
#include "CoreMinimal.h"
#include "VisionDepthRay.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FVisionDepthRay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthAverage;
    
    FVisionDepthRay();
};

