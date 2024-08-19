#pragma once
#include "CoreMinimal.h"
#include "SubLevelID.h"
#include "TriggerInfo.h"
#include "TransitionTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API UTransitionTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubLevelID SubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubLevelID NextSubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnArrival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNextSubLevel;
    
    UTransitionTriggerInfo();

};

