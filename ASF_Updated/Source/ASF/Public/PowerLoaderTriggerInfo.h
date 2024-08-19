#pragma once
#include "CoreMinimal.h"
#include "TriggerInfo.h"
#include "PowerLoaderTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API UPowerLoaderTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 stepIDtoCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IDPowerLoader;
    
    UPowerLoaderTriggerInfo();

};

