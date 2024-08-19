#include "OtagoEventSystem.h"

UOtagoEventSystem::UOtagoEventSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameState = NULL;
}

void UOtagoEventSystem::SortOtagoEventEffects(TArray<FOtagoEventEffect>& _Effects, TArray<FOtagoEventEffect>& _SortedEffects) {
}

bool UOtagoEventSystem::ResolveEventConditions(const FOtagoEvent& _Event) const {
    return false;
}

FOtagoEventOutcome UOtagoEventSystem::ResolveEvent(const FOtagoEvent& _Event) {
    return FOtagoEventOutcome{};
}

bool UOtagoEventSystem::ResolveConditionCollection(const FOtagoEventConditionCollection& _ConditionCollection, const FOtagoEvent& _ContextEvent) const {
    return false;
}

bool UOtagoEventSystem::ResolveCondition(const FOtagoEventCondition& _Condition, const FOtagoEvent& _ContextEvent, FOtagoEventValue& _Value) const {
    return false;
}

void UOtagoEventSystem::PickEventOption(int32 _Index) {
}

FString UOtagoEventSystem::GetValueAsString(const FOtagoEventValue& _Value) {
    return TEXT("");
}

FOtagoEventOutcome UOtagoEventSystem::GetLastEvent() const {
    return FOtagoEventOutcome{};
}

FText UOtagoEventSystem::GetFormattedValueTag_Implementation(FGameplayTag _Tag) const {
    return FText::GetEmpty();
}

FText UOtagoEventSystem::GetFormattedTarget(const FOtagoEventOutcome& _EventOutcome, int32 _TargetIndex) const {
    return FText::GetEmpty();
}

FText UOtagoEventSystem::GetFormattedOptionText(const FText& _Text, const FOtagoEventOption& _Option, const FOtagoEventOutcome& _EventOutcome) const {
    return FText::GetEmpty();
}

FText UOtagoEventSystem::GetFormattedEventText(const FText& _Text, const FOtagoEvent& _Event, const FOtagoEventOutcome& _EventOutcome) const {
    return FText::GetEmpty();
}

FText UOtagoEventSystem::GetFormattedEffectText(const FText& _Text, const FOtagoEventEffect& _Effect, const FOtagoEventOutcome& _EventOutcome) const {
    return FText::GetEmpty();
}

FText UOtagoEventSystem::GetFormattedEffectOutcome(const FOtagoEventOutcome& _EventOutcome, const FOtagoEventEffect& _Effect, int32 _OutcomeIndex) const {
    return FText::GetEmpty();
}

FString UOtagoEventSystem::GetConditionAsString(const FOtagoEventCondition& _Condition) {
    return TEXT("");
}

void UOtagoEventSystem::ForceNextEvent(FGameplayTag _EventTag) {
}


