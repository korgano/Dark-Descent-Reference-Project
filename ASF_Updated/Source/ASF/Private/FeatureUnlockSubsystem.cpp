#include "FeatureUnlockSubsystem.h"

UFeatureUnlockSubsystem::UFeatureUnlockSubsystem() {
}

void UFeatureUnlockSubsystem::UnlockAll() {
}

void UFeatureUnlockSubsystem::Unlock(const FGameplayTagContainer& _UnlockTags) {
}

void UFeatureUnlockSubsystem::Lock(FGameplayTag _LockedTag) {
}

bool UFeatureUnlockSubsystem::IsUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsTutorialUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsTutorialLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsSupplyUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsSupplyLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsSkillUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsSkillLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsRoomUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsRoomLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsResourceUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsResourceLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsMissionUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsMissionObjectiveUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsMissionObjectiveLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsMissionLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsMissionFinished(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsInterludeUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsInterludeLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsInteractionUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsInteractionLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsFullyUnlocked() const {
    return false;
}

bool UFeatureUnlockSubsystem::IsFoeUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsFoeLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsFeatureUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsFeatureLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsEventUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsEventLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsCodexEntryUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsCodexEntryLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsCivilianUnlocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsCivilianLocked(FGameplayTag _Tag) const {
    return false;
}

bool UFeatureUnlockSubsystem::IsAnyCodexEntryUnlocked() const {
    return false;
}

FGameplayTagContainer UFeatureUnlockSubsystem::GetLockedFeatures() const {
    return FGameplayTagContainer{};
}


