#pragma once
#include "CoreMinimal.h"
#include "MassiveOnslaughtPoolParams.h"
#include "MassiveOnslaughtPoolHiveSizeParams.generated.h"

USTRUCT(BlueprintType)
struct FMassiveOnslaughtPoolHiveSizeParams : public FMassiveOnslaughtPoolParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IncludeHiveSizeValueInCalculation;
    
    ASF_API FMassiveOnslaughtPoolHiveSizeParams();
};

