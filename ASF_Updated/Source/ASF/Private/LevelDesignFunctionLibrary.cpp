#include "LevelDesignFunctionLibrary.h"

ULevelDesignFunctionLibrary::ULevelDesignFunctionLibrary() {
}

void ULevelDesignFunctionLibrary::SortSubObjectives(TArray<USubObjectiveComponent*>& _SubObjectives, TArray<USubObjectiveComponent*>& _SortedSubObjectives) {
}

void ULevelDesignFunctionLibrary::SortObjectives(TArray<AObjective*>& _Objectives, TArray<AObjective*>& _SortedObjectives) {
}

void ULevelDesignFunctionLibrary::SortObjectiveRewards(TArray<UObjectiveRewardComponent*>& _Rewards, TArray<UObjectiveRewardComponent*>& _SortedRewards) {
}

void ULevelDesignFunctionLibrary::SortGameplayEventsWithSequences(TArray<AGameplayEvent*>& _Events, TArray<AGameplayEvent*>& _StandaloneEvents, TArray<FGameplayEventLink>& _EventLinkHeads, AMission* Mission) {
}

void ULevelDesignFunctionLibrary::GetGameplayEventLinkRec(AGameplayEvent* _Event, TArray<AGameplayEvent*>& _Events) {
}

bool ULevelDesignFunctionLibrary::GetGameplayEventLink(AGameplayEvent* _Event, FGameplayEventLink& _EventLink) {
    return false;
}

UTriggerInfo* ULevelDesignFunctionLibrary::DuplicateTriggerInfo(UTriggerInfo* _Info, UObject* _Outer) {
    return NULL;
}

UGameplayAction* ULevelDesignFunctionLibrary::DuplicateGameplayAction(UGameplayAction* _Action, UObject* _Outer) {
    return NULL;
}


