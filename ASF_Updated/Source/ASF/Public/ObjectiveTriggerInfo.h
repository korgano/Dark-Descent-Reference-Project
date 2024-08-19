#pragma once
#include "CoreMinimal.h"
#include "EnumObjectiveStatus.h"
#include "TriggerInfo.h"
#include "ObjectiveTriggerInfo.generated.h"

class AObjective;

UCLASS(Blueprintable)
class ASF_API UObjectiveTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumObjectiveStatus ObjectiveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AObjective* Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAfterBroadcast;
    
    UObjectiveTriggerInfo();

};

