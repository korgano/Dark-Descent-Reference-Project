#include "Tinda_EffectHandlerComponent.h"
#include "Templates/SubclassOf.h"

UTinda_EffectHandlerComponent::UTinda_EffectHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UTinda_EffectHandlerComponent::UnStaseAllEffects() {
}

void UTinda_EffectHandlerComponent::UnlistenTags(TArray<FGameplayTag> TagsToListen, FTagChangedDynamicDelegate Delegate) {
}

void UTinda_EffectHandlerComponent::UnlistenTag(FGameplayTag TagToListen, FTagChangedDynamicDelegate Delegate) {
}

void UTinda_EffectHandlerComponent::StaseAllEffects() {
}

void UTinda_EffectHandlerComponent::ListenToTags(TArray<FGameplayTag> TagsToListen, FTagChangedDynamicDelegate Delegate, bool _bExact, bool bTriggerIfMissing) {
}

void UTinda_EffectHandlerComponent::ListenToTag(FGameplayTag TagToListen, FTagChangedDynamicDelegate Delegate, bool _bExact, bool bTriggerIfMissing) {
}

bool UTinda_EffectHandlerComponent::HasEffectWithTagExact(const FGameplayTag GameplayTag, bool _ConsiderOnlyActivated) const {
    return false;
}

bool UTinda_EffectHandlerComponent::HasEffectWithName(const FName& _Name, bool _ConsiderOnlyActivated) const {
    return false;
}

bool UTinda_EffectHandlerComponent::HasEffectOfClass(const TSubclassOf<UTinda_Effect> _Class, bool _ConsiderOnlyActivated) const {
    return false;
}

TScriptInterface<ITinda_GameplayTagAssetInterface> UTinda_EffectHandlerComponent::GetOwnerAsInterface() {
    return NULL;
}

void UTinda_EffectHandlerComponent::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const {
}

UTinda_Effect* UTinda_EffectHandlerComponent::GetEffectWithTagExact(const FGameplayTag GameplayTag) const {
    return NULL;
}

UTinda_Effect* UTinda_EffectHandlerComponent::GetEffectWithTag(const FGameplayTag GameplayTag) const {
    return NULL;
}

UTinda_Effect* UTinda_EffectHandlerComponent::GetEffectWithName(const FName& _Name) const {
    return NULL;
}

TArray<UTinda_Effect*> UTinda_EffectHandlerComponent::GetEffectsWithTagExact(const FGameplayTag GameplayTag, bool ConsiderOnlyActivated) const {
    return TArray<UTinda_Effect*>();
}

TArray<UTinda_Effect*> UTinda_EffectHandlerComponent::GetEffectsWithTag(const FGameplayTag GameplayTag, bool ConsiderOnlyActivated) const {
    return TArray<UTinda_Effect*>();
}

TArray<UTinda_Effect*> UTinda_EffectHandlerComponent::GetEffectsWithName(const FName& _Name, bool _ConsiderOnlyActivated) const {
    return TArray<UTinda_Effect*>();
}

TArray<UTinda_Effect*> UTinda_EffectHandlerComponent::GetEffectsOfClass(const TSubclassOf<UTinda_Effect> _Class, bool ConsiderOnlyActivated) const {
    return TArray<UTinda_Effect*>();
}

UTinda_Effect* UTinda_EffectHandlerComponent::GetEffectOfClass(const TSubclassOf<UTinda_Effect> _Class) const {
    return NULL;
}

TArray<UTinda_Effect*> UTinda_EffectHandlerComponent::GetAllEffects(bool _bOnlyActive) {
    return TArray<UTinda_Effect*>();
}

TArray<UTinda_Effect*> UTinda_EffectHandlerComponent::GetAllActivatedEffect() const {
    return TArray<UTinda_Effect*>();
}

void UTinda_EffectHandlerComponent::EndEffectWithTagExact(const FGameplayTag GameplayTag) const {
}

void UTinda_EffectHandlerComponent::EndAllEffectWithTagExact(const FGameplayTag GameplayTag) const {
}

void UTinda_EffectHandlerComponent::EndAllEffectWithTag(const FGameplayTag GameplayTag) const {
}

void UTinda_EffectHandlerComponent::EndAllEffectsOfClass(const TSubclassOf<UTinda_Effect> _Class) const {
}

void UTinda_EffectHandlerComponent::AddStartingEffects() {
}


