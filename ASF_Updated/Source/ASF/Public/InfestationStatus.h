#pragma once
#include "CoreMinimal.h"
#include "InfestationStatus.generated.h"

USTRUCT(BlueprintType)
struct FInfestationStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HiveSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GaugeCurrentStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GaugeStepCount;
    
    ASF_API FInfestationStatus();
};

