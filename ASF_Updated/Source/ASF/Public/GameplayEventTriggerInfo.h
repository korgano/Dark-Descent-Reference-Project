#pragma once
#include "CoreMinimal.h"
#include "TriggerInfo.h"
#include "GameplayEventTriggerInfo.generated.h"

class AGameplayEvent;

UCLASS(Blueprintable)
class ASF_API UGameplayEventTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameplayEvent* GameplayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnCompletion;
    
    UGameplayEventTriggerInfo();

    UFUNCTION(BlueprintCallable)
    void SetTriggerGameplayEvent(AGameplayEvent* _Event);
    
};

