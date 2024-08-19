#pragma once
#include "CoreMinimal.h"
#include "HumanoidActionDurationEstimation.generated.h"

class AHumanoidTactical;

USTRUCT(BlueprintType)
struct FHumanoidActionDurationEstimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidTactical* Humanoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Malus;
    
    ASF_API FHumanoidActionDurationEstimation();
};

