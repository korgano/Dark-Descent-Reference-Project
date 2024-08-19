#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IntersectionPoint.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FIntersectionPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SegmentId;
    
    FIntersectionPoint();
};

