#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Geometry_FunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ASF_API UGeometry_FunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometry_FunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void BoundingBoxFromPoints(const TArray<FVector>& Points, FVector& BoundCenter, FVector& Extent, FVector& ExtentMax, FVector& ExtentMin, float& DiagonalLength);
    
};

