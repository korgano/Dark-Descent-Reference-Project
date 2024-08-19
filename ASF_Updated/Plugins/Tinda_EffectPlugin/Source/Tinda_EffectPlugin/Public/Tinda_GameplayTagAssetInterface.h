#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Tinda_GameplayTagAssetInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UTinda_GameplayTagAssetInterface : public UInterface {
    GENERATED_BODY()
};

class ITinda_GameplayTagAssetInterface : public IInterface {
    GENERATED_BODY()
public:
private:
    UFUNCTION(BlueprintCallable)
    virtual void SetTindaOwnedGameplayTags(FGameplayTagContainer& _TagContainer) PURE_VIRTUAL(SetTindaOwnedGameplayTags,);
    
public:
    UFUNCTION(BlueprintCallable)
    virtual bool RemoveTag(FGameplayTag TagToRemove) PURE_VIRTUAL(RemoveTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasMatchingTindaGameplayTag(FGameplayTag TagToCheck) const PURE_VIRTUAL(HasMatchingTindaGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasMatchingExactTindaGameplayTag(FGameplayTag TagToCheck) const PURE_VIRTUAL(HasMatchingExactTindaGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasAnyMatchingTindaGameplayTags(const FGameplayTagContainer& TagContainer) const PURE_VIRTUAL(HasAnyMatchingTindaGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasAnyMatchingExactTindaGameplayTags(const FGameplayTagContainer& TagContainer) const PURE_VIRTUAL(HasAnyMatchingExactTindaGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasAllMatchingTindaGameplayTags(const FGameplayTagContainer& TagContainer) const PURE_VIRTUAL(HasAllMatchingTindaGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasAllMatchingExactTindaGameplayTags(const FGameplayTagContainer& TagContainer) const PURE_VIRTUAL(HasAllMatchingExactTindaGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetTindaOwnedGameplayTags(FGameplayTagContainer& _TagContainer) const PURE_VIRTUAL(GetTindaOwnedGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FGameplayTag> FindGameplayTagsMatching(FGameplayTag _TagToCheck) const PURE_VIRTUAL(FindGameplayTagsMatching, return TArray<FGameplayTag>(););
    
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTag FindGameplayTagMatching(FGameplayTag _TagToCheck) const PURE_VIRTUAL(FindGameplayTagMatching, return FGameplayTag{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTagContainer ClearAllTagsWithoutEffect() PURE_VIRTUAL(ClearAllTagsWithoutEffect, return FGameplayTagContainer{};);
    
    UFUNCTION(BlueprintCallable)
    virtual bool AddLeafGameplayTag(FGameplayTag TagToAdd) PURE_VIRTUAL(AddLeafGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddGameplayTagFast(FGameplayTag TagToAdd) PURE_VIRTUAL(AddGameplayTagFast,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddGameplayTag(FGameplayTag TagToAdd) PURE_VIRTUAL(AddGameplayTag,);
    
};