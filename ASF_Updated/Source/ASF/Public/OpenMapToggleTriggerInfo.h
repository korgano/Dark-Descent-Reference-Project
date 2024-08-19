#pragma once
#include "CoreMinimal.h"
#include "EOpenMapToggleType.h"
#include "TriggerInfo.h"
#include "OpenMapToggleTriggerInfo.generated.h"

class AASFPlayerController;
class AGameplayEvent;

UCLASS(Blueprintable)
class ASF_API UOpenMapToggleTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOpenMapToggleType TriggerType;
    
public:
    UOpenMapToggleTriggerInfo();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMinimapOpenChanged(AASFPlayerController* Controller, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayEventActivated(AGameplayEvent* GameplayEvent);
    
};

