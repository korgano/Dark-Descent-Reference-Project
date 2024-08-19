#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "DataMove.h"
#include "EnumActionCancelability.h"
#include "EnumActionStatus.h"
#include "EnumActionType.h"
#include "Event_Action_ASFCharacterDelegate.h"
#include "Event_Action_ActionStatusDelegate.h"
#include "Event_Action_ActionStepDelegate.h"
#include "Templates/SubclassOf.h"
#include "Action.generated.h"

class AASFCharacter;
class AActor;
class UAction;
class UActionStep;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UAction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PathPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumActionStatus CurrentActionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotAffectedByDirectiveStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataMove DataMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseActorHitAsDesinationLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Action_ActionStatus OnActionEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Action_ActionStatus OnActionPaused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Action_ActionStatus OnActionResumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Action_ASFCharacter OnSetCharacter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UActionStep>> ActionSteps;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionStepIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionStep* CurrentActionStep;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Action_ActionStep OnChangeActionStep;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasToKeepMovementIfEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* DisableDirectiveStopEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeDisplayed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestedByPlayer;
    
    UAction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldBeDisplayed();
    
    UFUNCTION(BlueprintCallable)
    void SetHasToKeepMovementIfEnded(bool _bHasToKeepMovementIfEnded);
    
    UFUNCTION(BlueprintCallable)
    void SetDataMove(FDataMove _DataMove);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentActionStep(UActionStep* _NewActionStep);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacter(AASFCharacter* _Character);
    
    UFUNCTION(BlueprintCallable)
    void SetActionStepIndex(int32 _ActionStepIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResumeAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PauseAction();
    
    UFUNCTION(BlueprintCallable)
    void OnActionStepPaused(UActionStep* ActionStep, EnumActionStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnActionStepEnded(UActionStep* ActionStep, EnumActionStatus Status);
    
    UFUNCTION(BlueprintCallable)
    EnumActionStatus NextActionStep();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LastActionStepEnded(EnumActionStatus Status);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFinished();
    
    UFUNCTION(BlueprintCallable)
    void InitAction();
    
    UFUNCTION(BlueprintCallable)
    bool HasToKeepMovementIfEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNbActionAlive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataMove GetDataMove();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActionStep* GetCurrentActionStep();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AASFCharacter* GetCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AASFCharacter* GetBestToExecuteAction(const TArray<AASFCharacter*>& _Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumActionType GetActionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftClassPtr<UActionStep>> GetActionSteps();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActionStepIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetActionDestination();
    
    UFUNCTION(BlueprintCallable)
    EnumActionCancelability GetActionCancelability();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndAction(EnumActionStatus ActionStatus);
    
    UFUNCTION(BlueprintCallable)
    static UAction* Create_Action_Of_Type_BP(AActor* _Context, TSubclassOf<UAction> _ActionType, FDataMove _DataMove, bool _bRequestedByPlayer);
    
};

