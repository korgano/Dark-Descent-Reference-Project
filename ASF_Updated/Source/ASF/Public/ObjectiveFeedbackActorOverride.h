#pragma once
#include "CoreMinimal.h"
#include "SubLevelID.h"
#include "ObjectiveFeedbackActorOverride.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FObjectiveFeedbackActorOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubLevelID TargetSubLevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLiftFeedback;
    
    ASF_API FObjectiveFeedbackActorOverride();
};

