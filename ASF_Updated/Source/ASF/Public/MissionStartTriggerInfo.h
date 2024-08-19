#pragma once
#include "CoreMinimal.h"
#include "EMissionStartEnum.h"
#include "TriggerInfo.h"
#include "MissionStartTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API UMissionStartTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionStartEnum bAfterIntro;
    
    UMissionStartTriggerInfo();

};

