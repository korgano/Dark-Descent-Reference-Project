#include "Activity_Skill.h"
#include "EnumActivityType.h"
#include "Templates/SubclassOf.h"

UActivity_Skill::UActivity_Skill() {
    this->ActivityType = EnumActivityType::SKILL;
    this->Skill = NULL;
    this->UsingSkillEffect = NULL;
    this->bAutoInitSkill = true;
}

void UActivity_Skill::SetSkill(USkill* _Skill) {
}

void UActivity_Skill::OnSkillEnded(USkill* NewSkill, EnumActionStatus _Status) {
}

USkill* UActivity_Skill::GetSkill() {
    return NULL;
}

UActivity_Skill* UActivity_Skill::Create_Activity_Skill(AActor* _Context, TSubclassOf<UActivity_Skill> _ActivityClass, USkill* _Skill, FSkill_Params _Skill_Params) {
    return NULL;
}


