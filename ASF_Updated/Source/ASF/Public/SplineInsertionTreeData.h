#pragma once
#include "CoreMinimal.h"
#include "SplineInsertionTreeData.generated.h"

class AAssemblyChain_Robot;

USTRUCT(BlueprintType)
struct ASF_API FSplineInsertionTreeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAssemblyChain_Robot* AssemblyChain_Robot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineAlphaRange;
    
    FSplineInsertionTreeData();
};

