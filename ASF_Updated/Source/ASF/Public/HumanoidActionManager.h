#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "DataMove.h"
#include "EnumActionStatus.h"
#include "EnumActionType.h"
#include "Event_HumanoidActionManagerDelegate.h"
#include "Event_HumanoidActionManager_ActionDelegate.h"
#include "Event_HumanoidActionManager_HumanoidDelegate.h"
#include "Templates/SubclassOf.h"
#include "HumanoidActionManager.generated.h"

class AASFCharacter;
class AHumanoidTactical;
class UAction;
class UInteractiveComponent;

UCLASS(Blueprintable)
class ASF_API UHumanoidActionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_HumanoidActionManager_Action OnActionAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_HumanoidActionManager OnActionClear;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_HumanoidActionManager_Action OnActionRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_HumanoidActionManager_Humanoid OnSetHumanoidCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_HumanoidActionManager_Action OnActionStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAction*> ActionQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* HumanoidCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAction* CurrentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataMove LastMoveSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAction> LastActionClassSaved;
    
public:
    UHumanoidActionManager();

    UFUNCTION(BlueprintCallable)
    void UpdateLastMoveSaved(UPARAM(Ref) FDataMove& _DataMove, TSubclassOf<UAction> _actionSaved);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentAction();
    
    UFUNCTION(BlueprintCallable)
    void TryResumeSquadOrder(AHumanoidTactical* _HumanoidTactical);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDisable(bool _bIsDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetHumanoidCharacter(AASFCharacter* _Character);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAction(UAction* NewAction);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAction(int32 ActionIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnActionEnded(UAction* Action, EnumActionStatus ActionStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyActionOfTypes(const TArray<EnumActionType>& _Types) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyActionOfType(EnumActionType _Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastActionEndingPosition(bool _bWithoutSimpleMove) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAction* GetCurrentAction() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UAction*> GetAllActions();
    
    UFUNCTION(BlueprintCallable)
    TArray<UAction*> GetActionsOfType(EnumActionType _Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAction*> GetActionQueue() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearNextActions(EnumActionStatus _Reason);
    
    UFUNCTION(BlueprintCallable)
    void ClearActionsOfTypes(const TArray<EnumActionType>& _Types, EnumActionStatus _Reason);
    
    UFUNCTION(BlueprintCallable)
    bool ClearActions(EnumActionStatus _Reason, const TArray<EnumActionType>& _ActionTypeToIgnore);
    
    UFUNCTION(BlueprintCallable)
    void CancelActionInteraction(UInteractiveComponent* Interaction);
    
    UFUNCTION(BlueprintCallable)
    UAction* AddAction(UAction* _Action);
    
};

