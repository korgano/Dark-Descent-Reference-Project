#pragma once
#include "CoreMinimal.h"
#include "FOVRayDepth.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FFOVRayDepth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthAverage;
    
    FFOVRayDepth();
};

