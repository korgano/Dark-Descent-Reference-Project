#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoxIntersection.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct ASF_API FBoxIntersection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* CollisionPointer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanGenerateOcclusion;
    
    FBoxIntersection();
};

