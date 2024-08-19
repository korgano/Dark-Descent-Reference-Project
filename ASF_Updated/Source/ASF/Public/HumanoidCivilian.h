#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DataCarrierCivilian.h"
#include "HumanoidTactical.h"
#include "HumanoidCivilian.generated.h"

class ACivilianSpawner;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API AHumanoidCivilian : public AHumanoidTactical {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACivilianSpawner* AssociatedSpawner;
    
    AHumanoidCivilian(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ToDataCarrierCivilian(FDataCarrierCivilian& _DataCarrierCivilian);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLiftDepartedOrArrived(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadDataCarrierCivilian(const FDataCarrierCivilian& _DataCarrierCivilian);
    
};

