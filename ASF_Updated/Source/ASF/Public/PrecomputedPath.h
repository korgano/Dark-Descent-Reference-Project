#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PrecomputedPath.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FPrecomputedPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> PrecomputedDistToGraphID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GraphID;
    
    FPrecomputedPath();
};

