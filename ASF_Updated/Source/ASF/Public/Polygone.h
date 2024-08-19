#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Polygone.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FPolygone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> GeometryVertex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalCoordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConvexPolygone;
    
    FPolygone();
};

