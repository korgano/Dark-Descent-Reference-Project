#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ColorMat.generated.h"

USTRUCT(BlueprintType)
struct FColorMat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    ASF_API FColorMat();
};

