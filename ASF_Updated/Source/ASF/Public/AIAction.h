#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CharacterSightProperties.h"
#include "EnumAIActionStatus.h"
#include "EnumAIActionType.h"
#include "EnumActionReadyStatus.h"
#include "EnumStateShifting.h"
#include "Event_UAIActionDelegate.h"
#include "Event_UAIAction_TaskDelegate.h"
#include "Templates/SubclassOf.h"
#include "AIAction.generated.h"

class AAIController;
class AActor;
class APawn;
class UAIActionComponent;
class UAIPointOfInterestConfig;
class UAIPointOfInterestVolatile;
class UAIState;
class UBehaviorTree;
class UNavigationQueryFilter;
class UPointOfInterestConfig_DataAsset;
class UTinda_Effect;
class UWorld;

UCLASS(Blueprintable)
class ASF_API UAIAction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UAIAction OnActionEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UAIAction_Task OnActionTaskFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActionOngoing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIActionComponent* AIActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestConfig* ActionPOIConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestVolatile* BindedPOI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAIActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAIActionStatus ActionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* DeferredTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomNavFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceShifting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanForceAbort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> ActionEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery QueryToRespect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PerceptionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PerceptionDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterestConfig_DataAsset* ActionPOIConfig_DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* ActionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumActionReadyStatus ActionReadyStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ActionSights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterSightProperties> ActionCustomSights;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIndependantAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIState* CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIState* NextState;
    
public:
    UAIAction();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseCustomNavFilter() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateActionReadyStatus(EnumActionReadyStatus _UpdateMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartIndependentAction(AActor* _Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartAction(UObject* _Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAICondition(FGameplayTag _ConditionTag, bool _IsValid);
    
    UFUNCTION(BlueprintCallable)
    void SetAIActionComponent(UAIActionComponent* _AIActionComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetActionStatus(EnumAIActionStatus _EnumAIActionStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetActionOwnerAndController(AActor* _Owner, AAIController* _Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreInitAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PerformAITask(FGameplayTag _ConditionTag, UObject* _Target, bool& _Delayed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PerformAICondition(FGameplayTag _ConditionTag, UObject* _Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OverrideSight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionOngoing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRestoreDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetPerceptionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetPerceptionDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UNavigationQueryFilter> GetNavFilter();
    
    UFUNCTION(BlueprintCallable)
    UAIPointOfInterestVolatile* GetBindedPOI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIController* GetAIController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIActionComponent* GetAIActionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumAIActionType GetActionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetActionTagName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumAIActionStatus GetActionStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCharacterSightProperties> GetActionSight() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EnumStateShifting GetActionShiftingAuthorization_Int(UAIState* _CurrentState, UAIState* _NextState);
    
public:
    UFUNCTION(BlueprintCallable)
    EnumStateShifting GetActionShiftingAuthorization(UAIState* _CurrentState, UAIState* _NextState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIPointOfInterestConfig* GetActionPOIConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UTinda_Effect> GetActionEffectClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBehaviorTree* GetActionDeferredTree() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndAction(EnumAIActionStatus _AIActionStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanExecuteAction(UObject* _Target, bool _FromPosition, bool _AllowAcceptanceRadius, bool _UseProbability);
    
    UFUNCTION(BlueprintCallable)
    void BindPoiToAction(UAIPointOfInterestVolatile* _BindedPOI);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AbortAITask(FGameplayTag _ConditionTag, UObject* _Target);
    
};

