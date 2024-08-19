#include "Skill_Deployable.h"
#include "Templates/SubclassOf.h"

USkill_Deployable::USkill_Deployable() {
    this->radiusValidation = 50.00f;
    this->Deployable_VisibilityLocation.AddDefaulted(1);
    this->NavFilterClass = NULL;
}

bool USkill_Deployable::SpawnPointIsValid(FVector Location, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return false;
}

void USkill_Deployable::SpawnDeployable_Implementation(FSkill_Params _SkillParams) {
}

void USkill_Deployable::RemoveSkillRestrictedLaunchZone(ASkillRestrictedLaunchZone* SkillRestrictedLaunchZone) {
}

void USkill_Deployable::RemovePlacementRestrictionArea(APlacementRestrictionArea* RestrictionArea) {
}

void USkill_Deployable::OnInteractionDeployableStart(UInteractiveComponent* InteractiveComponent, EnumActionStatus InteractionStatus) {
}

void USkill_Deployable::OnInteractionDeployableEnd(UInteractiveComponent* InteractiveComponent, EnumActionStatus InteractionStatus) {
}

void USkill_Deployable::NotifyCreation(AActor* _Actor) {
}

bool USkill_Deployable::IsRotationAllowedByRestrictionAreas(FVector _Location, FRotator _Rotator) {
    return false;
}

void USkill_Deployable::HandleRestrictionAreaRemoved_Implementation(APlacementRestrictionArea* RemovedArea) {
}

void USkill_Deployable::HandleNewRestrictionArea_Implementation(APlacementRestrictionArea* NewArea) {
}

TArray<ASkillRestrictedLaunchZone*> USkill_Deployable::GetSkillRestrictedLaunchZones() const {
    return TArray<ASkillRestrictedLaunchZone*>();
}

TArray<APlacementRestrictionArea*> USkill_Deployable::GetMonitoredRestrictionAreas() const {
    return TArray<APlacementRestrictionArea*>();
}

void USkill_Deployable::ClearSkillRestrictedLaunchZones() {
}

void USkill_Deployable::ClearPlacementRestrictionAreas() {
}

void USkill_Deployable::AddSkillRestrictedLaunchZone(ASkillRestrictedLaunchZone* NewSkillRestrictedLaunchZone) {
}

void USkill_Deployable::AddPlacementRestrictionArea(APlacementRestrictionArea* NewRestrictionArea) {
}


