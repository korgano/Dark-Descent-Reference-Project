#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MinimapData.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FMinimapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TextureCenterPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TexturePlaneSize;
    
    FMinimapData();
};

