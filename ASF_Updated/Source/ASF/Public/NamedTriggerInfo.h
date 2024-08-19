#pragma once
#include "CoreMinimal.h"
#include "TriggerInfo.h"
#include "NamedTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API UNamedTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TriggerInfoName;
    
    UNamedTriggerInfo();

};

