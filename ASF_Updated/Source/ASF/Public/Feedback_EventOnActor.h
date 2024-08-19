#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EEventOnActorType.h"
#include "Feedback_EventOnActor.generated.h"

USTRUCT(BlueprintType)
struct FFeedback_EventOnActor : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventOnActorType EventOnActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayDuration;
    
    ASF_API FFeedback_EventOnActor();
};

