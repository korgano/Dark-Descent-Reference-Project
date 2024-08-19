#pragma once
#include "CoreMinimal.h"
#include "PrecomputedPath.h"
#include "PrecomputedPath_ArrayPoints.h"
#include "PrecomputedPath_Points.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FPrecomputedPath_Points {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPrecomputedPath_ArrayPoints> PrecomputedPathPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrecomputedPath PrecomputedPath;
    
    FPrecomputedPath_Points();
};

