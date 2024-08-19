#pragma once
#include "CoreMinimal.h"
#include "TriggerBoxFXData.generated.h"

class AFXActor;

USTRUCT(BlueprintType)
struct FTriggerBoxFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFXActor* FXActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeStop;
    
    ASF_API FTriggerBoxFXData();
};

