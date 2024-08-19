#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "TriggerInfo.h"
#include "ActuallyWatchSecuCamTriggerInfo.generated.h"

class AGameplayEvent;
class AGameplayTwinActor;
class ASecurityCamera;

UCLASS(Blueprintable)
class ASF_API UActuallyWatchSecuCamTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference cameraReference;
    
    UActuallyWatchSecuCamTriggerInfo();

    UFUNCTION(BlueprintCallable)
    void UpdateTriggerActivation(ASecurityCamera* SecurityCamera);
    
    UFUNCTION(BlueprintCallable)
    void OnTwinLink(AGameplayTwinActor* TwinActor);
    
    UFUNCTION(BlueprintCallable)
    void OnParentEventActivated(AGameplayEvent* Event);
    
};

