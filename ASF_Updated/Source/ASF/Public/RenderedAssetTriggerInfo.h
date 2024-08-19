#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "TriggerInfo.h"
#include "RenderedAssetTriggerInfo.generated.h"

class AGameplayTwinActor;

UCLASS(Blueprintable)
class ASF_API URenderedAssetTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference TargetedActorReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderedInTrueSight;
    
    URenderedAssetTriggerInfo();

    UFUNCTION(BlueprintCallable)
    void TickEvent(float X);
    
    UFUNCTION(BlueprintCallable)
    void OnTwinUnLink(AGameplayTwinActor* GameplayTwinActor);
    
    UFUNCTION(BlueprintCallable)
    void OnTwinLink(AGameplayTwinActor* GameplayTwinActor);
    
};

