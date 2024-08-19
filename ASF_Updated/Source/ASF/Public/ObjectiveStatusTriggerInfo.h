#pragma once
#include "CoreMinimal.h"
#include "EnumObjectiveStatus.h"
#include "TriggerInfo.h"
#include "ObjectiveStatusTriggerInfo.generated.h"

class AObjective;

UCLASS(Blueprintable)
class ASF_API UObjectiveStatusTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumObjectiveStatus ObjectiveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EnumObjectiveStatus> ObjectiveStatusList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AObjective* Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAfterBroadcast;
    
    UObjectiveStatusTriggerInfo();

};

