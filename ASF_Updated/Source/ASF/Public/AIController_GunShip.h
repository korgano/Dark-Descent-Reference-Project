#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ASFCharacterAIController.h"
#include "EnumAiGunshipState.h"
#include "EnumStateProvenance.h"
#include "EnumStateShiftingMode.h"
#include "Event_AIGunShip_StateChangedDelegate.h"
#include "Event_AIGunShip_TargetChangedDelegate.h"
#include "AIController_GunShip.generated.h"

class AActor;
class AGunship;
class AGunshipRoamArea;
class AGunshipRoamingSpline;
class UAIActionComponent;
class UAIState;
class UAIStateManager;
class UObject;
class UPOITargetingComponent;

UCLASS(Blueprintable)
class ASF_API AAIController_GunShip : public AASFCharacterAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AIGunShip_StateChanged OnAIGunshipStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AIGunShip_TargetChanged OnAIGunshipTargetChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumAiGunshipState, UAIState*> StateEnumToClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIStateManager* AIStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIActionComponent* AIActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGunship* Gunship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGunshipRoamArea*> RoamAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGunshipRoamArea* CurrentRoamArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGunshipRoamingSpline* CurrentRoamingSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RoamTransitionTimerHandle;
    
public:
    AAIController_GunShip(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnpauseRoamTransitionTimer();
    
    UFUNCTION(BlueprintCallable)
    void StopRoamTransitionTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartRoamTransitionTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetRoamAreas(const TArray<AGunshipRoamArea*>& InRoamAreas);
    
    UFUNCTION(BlueprintCallable)
    void SetGunShipTarget(UObject* NewTarget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentRoamingSpline(AGunshipRoamingSpline* NewRoamingSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentRoamArea(AGunshipRoamArea* NewRoamArea);
    
public:
    UFUNCTION(BlueprintCallable)
    void PauseRoamTransitionTimer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetChange(UPOITargetingComponent* _EnnemyTargetingComponent, AActor* _OldTarget, AActor* _NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnStateShiftingEneded(UAIStateManager* _AIStateManager, UAIState* _CurrentState, UAIState* _OldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRoamTransitionTimerExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnRoamAreaTriggered(AGunshipRoamArea* TriggeredArea);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitController(AGunship* NewGunship);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIState* GetStateClass(EnumAiGunshipState _State) const;
    
    UFUNCTION(BlueprintCallable)
    EnumAiGunshipState GetGunShipState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGunshipRoamingSpline* GetCurrentRoamingSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGunshipRoamArea* GetCurrentRoamArea() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeStateInternal(EnumAiGunshipState _OldState, EnumAiGunshipState _NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ChangeGunShipState(EnumAiGunshipState NewState, EnumStateProvenance _StateProvenance, FGameplayTag _ShiftingReason, EnumStateShiftingMode _ShiftingMode);
    
};

