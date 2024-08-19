#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterIDName.h"
#include "CustomCenterLocationInterface.h"
#include "ETacticalDroneState.h"
#include "Event_TacticalDrone_StateChangedDelegate.h"
#include "HumanoidMarine.h"
#include "OpenDataWidget.h"
#include "TacticalDrone.generated.h"

class UCombatComponent;
class UMapFeedbackDataProperties;
class USpotLightComponent;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API ATacticalDrone : public AHumanoidMarine, public IOpenDataWidget, public ICustomCenterLocationInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatComponent* CombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ETacticalDroneState TacticalDroneState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDNameOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FText TacticalDroneShortName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TacticalDrone_StateChanged Event_TacticalDrone_StateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMapFeedbackDataProperties> OpenDataProperties;
    
public:
    ATacticalDrone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetTacticalDroneState(ETacticalDroneState newTacticalDroneState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStateDeadChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLiftDepartedOrArrived(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UMapFeedbackDataProperties> GetOpenDataProperties_Implementation() const;
    
    /*UFUNCTION(BlueprintCallable, BlueprintPure)
    USpotLightComponent* GetOverheadSpotLight() const;*/

    // Fix for true pure virtual functions not being implemented
};