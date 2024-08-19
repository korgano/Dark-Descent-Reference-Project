#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MassiveOnslaughtPoolParams.generated.h"

USTRUCT(BlueprintType)
struct FMassiveOnslaughtPoolParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Modifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Multiplier;
    
    ASF_API FMassiveOnslaughtPoolParams();
};

