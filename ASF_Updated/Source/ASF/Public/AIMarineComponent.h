#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EnumActionStatus.h"
#include "EnumAiEnemyMarineState.h"
#include "EnumAiMarineCommand.h"
#include "EnumCharacterAnimAttitude.h"
#include "AIMarineComponent.generated.h"

class AASFPlayerState;
class AActor;
class AAiController_Humanoid;
class AHumanoid;
class AHumanoidTactical;
class ASquad;
class UAction;
class UHumanoidActionManager;
class UPOITargetingComponent;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;
class UTrackingSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAIMarineComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidTactical* Marine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAiController_Humanoid* MarineController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle NoActionRecordedTimerHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AllyTargetAcquireTimerHandler;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* StateEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnemyBleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetPresent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterAnimAttitude CurrentAttitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle UpdateAttitudeTimerHandler;
    
public:
    UAIMarineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCurrentAttitude(EnumCharacterAnimAttitude _NewAttitude, float _TimeDelayed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAttitudeAfterDelay();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResolveState();
    
    UFUNCTION(BlueprintCallable)
    void OnTrackingSystemUpdated(UTrackingSystemComponent* TrackingSystemComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetChanged(UPOITargetingComponent* POITargetingComponent, AActor* _OldTarget, AActor* _NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadInit(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnNewState(AAiController_Humanoid* AIController, EnumAiEnemyMarineState OldState, EnumAiEnemyMarineState NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnForcedAimingChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnActionStart(UHumanoidActionManager* HumanoidActionManager, UAction* _Action);
    
    UFUNCTION(BlueprintCallable)
    void OnActionManagerInit(AHumanoid* _Character, UHumanoidActionManager* _HumanoidActionManager);
    
    UFUNCTION(BlueprintCallable)
    void OnActionEnded(UAction* _Action, EnumActionStatus _ActionStatus);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Init();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumCharacterAnimAttitude GetCurrentAttitude();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumAiEnemyMarineState GetAiState() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeCommandState(EnumAiMarineCommand _NewState);
    
    UFUNCTION(BlueprintCallable)
    void BindOnSquad(AASFPlayerState* _PS, ASquad* _Squad);
    
};

