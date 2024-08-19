#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "AmbushTrackerIndicator.generated.h"

class UTinda_EffectHandlerComponent;
class UTrackedComponent;

UCLASS(Blueprintable)
class ASF_API AAmbushTrackerIndicator : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrackedComponent* TrackedComponent;
    
public:
    AAmbushTrackerIndicator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrackedComponent* GetTrackedComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTinda_EffectHandlerComponent* GetEffectHandler() const;
    
};

