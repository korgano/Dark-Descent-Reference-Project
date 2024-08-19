#include "SkillFeedback.h"

ASkillFeedback::ASkillFeedback(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InstigatorSkill = NULL;
}

void ASkillFeedback::RemoveFeedback_Implementation() {
}

void ASkillFeedback::Initialize_Implementation(USkill* _InstigatorSkill) {
}

USkill* ASkillFeedback::GetInstigatorSkill() {
    return NULL;
}


