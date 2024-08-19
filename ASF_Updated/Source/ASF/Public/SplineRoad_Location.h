#pragma once
#include "CoreMinimal.h"
#include "SplineRoad_Location.generated.h"

class AEntryPoint;
class ASplineRoad;

USTRUCT(BlueprintType)
struct FSplineRoad_Location {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineRoad* SplineRoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RatioFromStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEntryPoint* EntryPoint;
    
    ASF_API FSplineRoad_Location();
};

