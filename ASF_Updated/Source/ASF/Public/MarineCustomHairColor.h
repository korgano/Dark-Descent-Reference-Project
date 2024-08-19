#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MarineCustomHairColor.generated.h"

USTRUCT(BlueprintType)
struct FMarineCustomHairColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HairColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HairRootColor;
    
    ASF_API FMarineCustomHairColor();
};

