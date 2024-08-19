#pragma once
#include "CoreMinimal.h"
#include "SplineRoad_Path_Cost.generated.h"

class ASplineRoad;

USTRUCT(BlueprintType)
struct FSplineRoad_Path_Cost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineRoad* SplineRoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cost;
    
    ASF_API FSplineRoad_Path_Cost();
};

