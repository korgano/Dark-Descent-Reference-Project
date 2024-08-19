#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EnumDestroyReason.h"
#include "SubObjectiveComponent.h"
#include "ExtractionSubObjectiveComponent.generated.h"

class AActor;
class AHumanoid;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UExtractionSubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* HumanoidToExtract;
    
public:
    UExtractionSubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHumanoidToExtract(AHumanoid* Humanoid);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHumanoidDestroyed(AActor* ActorKilled, EnumDestroyReason DestroyReason);
    
    UFUNCTION(BlueprintCallable)
    void OnHumanoidCarriedStateChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHumanoid* GetHumanoidToExtract() const;
    
};

