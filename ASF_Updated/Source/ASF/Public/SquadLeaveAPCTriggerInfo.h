#pragma once
#include "CoreMinimal.h"
#include "TriggerInfo.h"
#include "SquadLeaveAPCTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API USquadLeaveAPCTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EntryPointNameToListen;
    
    USquadLeaveAPCTriggerInfo();

};

