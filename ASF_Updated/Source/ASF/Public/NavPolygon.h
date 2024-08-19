#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavPolygon.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FNavPolygon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    FNavPolygon();
};

