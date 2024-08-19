#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TagModifiedStruct.h"
#include "TriggerInfo.h"
#include "TagModifiedTriggerInfo.generated.h"

class AGameplayEvent;
class AGameplayTwinActor;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API UTagModifiedTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTagModifiedStruct TagModifiedStruct;
    
    UTagModifiedTriggerInfo();

    UFUNCTION(BlueprintCallable)
    void OnTwinLink(AGameplayTwinActor* TwinActor);
    
    UFUNCTION(BlueprintCallable)
    void OnParentEventActivated(AGameplayEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    void OnNeededTag(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnForbiddenTag(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
};

