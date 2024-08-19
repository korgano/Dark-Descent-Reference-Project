#include "Action_Skill.h"
#include "Templates/SubclassOf.h"

UAction_Skill::UAction_Skill() {
    this->Skill = NULL;
}

UAction_Skill* UAction_Skill::Create_Action_Skill(AActor* _Context, TSubclassOf<UAction_Skill> _ActionClass, AASFCharacter* _Instigator, FDataMove _DataMove, USkill* _Skill, FSkill_Params _Skill_Params) {
    return NULL;
}


