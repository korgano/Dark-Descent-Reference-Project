#pragma once
#include "CoreMinimal.h"
#include "StessValue.h"
#include "StessEventOnActor.generated.h"

USTRUCT(BlueprintType)
struct FStessEventOnActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStessValue StressValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID_EventOnActor;
    
    ASF_API FStessEventOnActor();
};

