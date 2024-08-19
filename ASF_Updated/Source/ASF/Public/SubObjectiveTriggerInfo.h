#pragma once
#include "CoreMinimal.h"
#include "EnumObjectiveStatus.h"
#include "TriggerInfo.h"
#include "SubObjectiveTriggerInfo.generated.h"

class AObjective;

UCLASS(Blueprintable)
class ASF_API USubObjectiveTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumObjectiveStatus ObjectiveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AObjective* Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubObjectiveName;
    
    USubObjectiveTriggerInfo();

};

