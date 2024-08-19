#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "TriggerInfo.h"
#include "WatchSecurityCameraTriggerInfo.generated.h"

UCLASS(Blueprintable)
class ASF_API UWatchSecurityCameraTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference cameraReference;
    
    UWatchSecurityCameraTriggerInfo();

};

