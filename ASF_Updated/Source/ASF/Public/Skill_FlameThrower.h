#pragma once
#include "CoreMinimal.h"
#include "DataMove.h"
#include "EnumActionStatus.h"
#include "Skill_Params.h"
#include "Skill_ShootAtLocation.h"
#include "Templates/SubclassOf.h"
#include "Skill_FlameThrower.generated.h"

class UAction;
class UActionStep;
class UActionStep_Activity;
class UAction_Skill;
class UActivity;
class UActivity_Skill;

UCLASS(Blueprintable)
class ASF_API USkill_FlameThrower : public USkill_ShootAtLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivity_Skill* Activity_Skill;
    
    USkill_FlameThrower();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivityEnd(UActivity* _Activity, EnumActionStatus _Status);
    
    UFUNCTION(BlueprintCallable)
    void OnActivityCreated(UActionStep_Activity* _Step, UActivity* _Activity);
    
    UFUNCTION(BlueprintCallable)
    void OnActionStepChange(UAction* _Action, UActionStep* _ActionStep);
    
    UFUNCTION(BlueprintCallable)
    UAction_Skill* CreateActionSkill_FlameThrower(TSubclassOf<UAction_Skill> _ActionClass, FDataMove _DataMove, const FSkill_Params& _Skill_Params);
    
};

