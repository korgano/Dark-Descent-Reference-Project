#include "Laboratory.h"

ALaboratory::ALaboratory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseXenoTechTier = EXenoTechTier::LEVEL_1;
    this->XenoTechTier = EXenoTechTier::LEVEL_1;
    this->BaseProjectDuration = 4;
    this->ProjectDuration = 0;
    this->DisabledResearchDuration = 0;
    this->bFirstVisitSinceMission09 = false;
}

void ALaboratory::StartResearchProject(UBM_ResearchProject_DataAsset* _DataAsset) {
}

void ALaboratory::RemoveNewAvailableResearchProject(UBM_ResearchProject_DataAsset* _Asset) {
}

bool ALaboratory::IsResearchDisabled() const {
    return false;
}

bool ALaboratory::IsProjectConditionMet(UBM_ResearchProject_DataAsset* _DataAsset) const {
    return false;
}

FText ALaboratory::GetUpgradeNameForXenoTechTier(EXenoTechTier _XenoTechTier) const {
    return FText::GetEmpty();
}

TArray<UXenoTech_DataAsset*> ALaboratory::GetUnlockedXenoTechs() const {
    return TArray<UXenoTech_DataAsset*>();
}

EResearchProjectStatus ALaboratory::GetResearchProjectStatus(UBM_ResearchProject_DataAsset* _ResearchAsset) const {
    return EResearchProjectStatus::LOCKED;
}

bool ALaboratory::GetResearchProjectName(UBM_ResearchProject_DataAsset* _Asset, FName& _Name) const {
    return false;
}

bool ALaboratory::GetResearchProjectByName(UBM_ResearchProject_DataAsset*& _Asset, FName _Name) const {
    return false;
}

int32 ALaboratory::GetRemainingResearchProjectCount() const {
    return 0;
}

bool ALaboratory::GetOngoingResearchProject(FResearchProject& _ResearchProject, UBM_ResearchProject_DataAsset* _ResearchAsset) const {
    return false;
}

int32 ALaboratory::GetAvailableResearchProjectCount() const {
    return 0;
}

void ALaboratory::CompleteResearchProject(const FResearchProject& _ResearchProject) {
}

bool ALaboratory::CanResearchProject(UBM_ResearchProject_DataAsset* _DataAsset) const {
    return false;
}

bool ALaboratory::CanAffordProject(UBM_ResearchProject_DataAsset* _DataAsset) const {
    return false;
}

void ALaboratory::AddNewAvailableResearchProject(UBM_ResearchProject_DataAsset* _Asset) {
}

void ALaboratory::AddDisabledResearchDuration(int32 _Turns) {
}

void ALaboratory::AccomplishResearchProject(UBM_ResearchProject_DataAsset* _DataAsset) {
}


