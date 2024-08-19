#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PrecomputedPath_ArrayPoints.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FPrecomputedPath_ArrayPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PathPoint;
    
    FPrecomputedPath_ArrayPoints();
};

