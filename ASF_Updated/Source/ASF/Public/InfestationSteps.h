#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InfestationSteps.generated.h"

USTRUCT(BlueprintType)
struct FInfestationSteps : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HiveSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GaugeStepCount;
    
    ASF_API FInfestationSteps();
};

