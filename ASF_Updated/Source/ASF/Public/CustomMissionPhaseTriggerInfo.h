#pragma once
#include "CoreMinimal.h"
#include "CustomMissionPhase.h"
#include "TriggerInfo.h"
#include "CustomMissionPhaseTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API UCustomMissionPhaseTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomMissionPhase CustomMissionPhase;
    
    UCustomMissionPhaseTriggerInfo();

};

