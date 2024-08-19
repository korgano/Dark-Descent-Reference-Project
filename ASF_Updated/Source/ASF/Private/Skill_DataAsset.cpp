#include "Skill_DataAsset.h"

USkill_DataAsset::USkill_DataAsset() {
    this->RessourceNeeded = NULL;
    this->NbRessourceNeeded = 1;
    this->Acknow = NULL;
    this->AutoConsumeResource = true;
    this->CanBeLaunchedIndoor = true;
    this->CanBeUsedInIndoorSublevel = true;
    this->AnimationType = EActivityAnimationType::NONE;
    this->SkillPerception = NULL;
    this->AllowHoverWhileSkillSelection = false;
    this->show3DCursorWhileSkilLSelected = false;
    this->SkillList_OrderWeight = 0;
    this->bIsAStance = false;
}

FText USkill_DataAsset::GetDescription(const UObject* WorldContextObject) {
    return FText::GetEmpty();
}


