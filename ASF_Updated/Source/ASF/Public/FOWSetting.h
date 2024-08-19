#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FOWSetting.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FFOWSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FOWCenterPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileTextureSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TileScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileNumber;
    
    FFOWSetting();
};

