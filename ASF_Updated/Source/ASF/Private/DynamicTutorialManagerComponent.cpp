#include "DynamicTutorialManagerComponent.h"
#include "Templates/SubclassOf.h"

UDynamicTutorialManagerComponent::UDynamicTutorialManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DynamicTutorialManager = NULL;
    this->DynamicTutorialsDataTable = NULL;
}

void UDynamicTutorialManagerComponent::TutorialTriggered(UDynamicTutorial* _Tutorial) {
}

void UDynamicTutorialManagerComponent::RemoveTutorial(UDynamicTutorial* _Tutorial) {
}

void UDynamicTutorialManagerComponent::RemoveAllTutorials() {
}

void UDynamicTutorialManagerComponent::OnUserSettingChanged(FGameplayTag _SettingTag, bool _Value) {
}

void UDynamicTutorialManagerComponent::OnTutorialLockChanged(FGameplayTag _SettingTag) {
}

bool UDynamicTutorialManagerComponent::IsInit() const {
    return false;
}

bool UDynamicTutorialManagerComponent::IsDynamicTutorialClassIsInstancied(TSubclassOf<UDynamicTutorial> _DTutorialClass) {
    return false;
}

FGameplayTagContainer UDynamicTutorialManagerComponent::GetUnreadDynamicTutorialTags() const {
    return FGameplayTagContainer{};
}


UDynamicTutorial* UDynamicTutorialManagerComponent::GetDynamicTutorialWithTag(const FGameplayTag& _DTutorialTag) {
    return NULL;
}

UDynamicTutorial* UDynamicTutorialManagerComponent::GetDynamicTutorialWithCodexEntryTag(const FGameplayTag& _DTutorialEntryTag) {
    return NULL;
}

UDataTable* UDynamicTutorialManagerComponent::GetDynamicTutorialsDataTable() const {
    return NULL;
}

UDynamicTutorial* UDynamicTutorialManagerComponent::GetDynamicTutorialClassOfClass(TSubclassOf<UDynamicTutorial> _DTutorialClass) {
    return NULL;
}

TArray<TSubclassOf<UDynamicTutorial>> UDynamicTutorialManagerComponent::GetDynamicTutorialClasses() const {
    return TArray<TSubclassOf<UDynamicTutorial>>();
}

void UDynamicTutorialManagerComponent::CreateDynamicTutorial(TSubclassOf<UDynamicTutorial> _DTutorialClass) {
}

void UDynamicTutorialManagerComponent::CreateAllNeededTutorials() {
}


