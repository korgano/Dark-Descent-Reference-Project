#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "TriggerInfo.h"
#include "AlienLeaveStasisTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API UAlienLeaveStasisTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName AlienIDName;
    
    UAlienLeaveStasisTriggerInfo();

};

