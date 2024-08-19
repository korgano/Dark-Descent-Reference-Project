#pragma once
#include "CoreMinimal.h"
#include "NavReconstructionTaskData.generated.h"

class AHumanoidMarine;

USTRUCT(BlueprintType)
struct ASF_API FNavReconstructionTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoidMarine*> MarinesToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoidMarine*> CondemnAliveAccessibleMarines;
    
    FNavReconstructionTaskData();
};

