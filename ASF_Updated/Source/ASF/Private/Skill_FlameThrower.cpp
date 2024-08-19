#include "Skill_FlameThrower.h"
#include "Templates/SubclassOf.h"

USkill_FlameThrower::USkill_FlameThrower() {
    this->Activity_Skill = NULL;
}

void USkill_FlameThrower::OnActivityEnd_Implementation(UActivity* _Activity, EnumActionStatus _Status) {
}

void USkill_FlameThrower::OnActivityCreated(UActionStep_Activity* _Step, UActivity* _Activity) {
}

void USkill_FlameThrower::OnActionStepChange(UAction* _Action, UActionStep* _ActionStep) {
}

UAction_Skill* USkill_FlameThrower::CreateActionSkill_FlameThrower(TSubclassOf<UAction_Skill> _ActionClass, FDataMove _DataMove, const FSkill_Params& _Skill_Params) {
    return NULL;
}


