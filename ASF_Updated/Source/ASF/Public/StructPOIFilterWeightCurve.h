#pragma once
#include "CoreMinimal.h"
#include "EnumPOIFilterWeightCurveType.h"
#include "StructPOIFilterWeightCurve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FStructPOIFilterWeightCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveWeigth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumPOIFilterWeightCurveType CurveType;
    
    ASF_API FStructPOIFilterWeightCurve();
};

