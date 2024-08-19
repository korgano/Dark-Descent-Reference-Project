#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "FXActor.generated.h"

UCLASS(Abstract, Blueprintable)
class ASF_API AFXActor : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    AFXActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartEffects();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyEffects();
    
};

