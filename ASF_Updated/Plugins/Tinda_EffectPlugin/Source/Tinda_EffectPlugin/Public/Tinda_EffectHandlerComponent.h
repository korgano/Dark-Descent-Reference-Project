#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Event_UTinda_EffectHandlerComponentDelegate.h"
#include "Event_UTinda_EffectHandlerComponent_UTinda_EffectDelegate.h"
#include "TagChangedDynamicDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "Tinda_EffectHandlerComponent.generated.h"

class ITinda_GameplayTagAssetInterface;
class UTinda_GameplayTagAssetInterface;
class UTinda_Effect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TINDA_EFFECTPLUGIN_API UTinda_EffectHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTinda_Effect*> Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<ITinda_GameplayTagAssetInterface> OwnerAsInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UTinda_EffectHandlerComponent OnTickEffectHandler;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UTinda_EffectHandlerComponent_UTinda_Effect OnNewEffectActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UTinda_EffectHandlerComponent_UTinda_Effect OnEffectDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UTinda_Effect>> EffectsToAddAtStart;
    
    UTinda_EffectHandlerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnStaseAllEffects();
    
    UFUNCTION(BlueprintCallable)
    void UnlistenTags(TArray<FGameplayTag> TagsToListen, FTagChangedDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnlistenTag(FGameplayTag TagToListen, FTagChangedDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void StaseAllEffects();
    
    UFUNCTION(BlueprintCallable)
    void ListenToTags(TArray<FGameplayTag> TagsToListen, FTagChangedDynamicDelegate Delegate, bool _bExact, bool bTriggerIfMissing);
    
    UFUNCTION(BlueprintCallable)
    void ListenToTag(FGameplayTag TagToListen, FTagChangedDynamicDelegate Delegate, bool _bExact, bool bTriggerIfMissing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEffectWithTagExact(const FGameplayTag GameplayTag, bool _ConsiderOnlyActivated) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEffectWithName(const FName& _Name, bool _ConsiderOnlyActivated) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEffectOfClass(const TSubclassOf<UTinda_Effect> _Class, bool _ConsiderOnlyActivated) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TScriptInterface<ITinda_GameplayTagAssetInterface> GetOwnerAsInterface();
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTinda_Effect* GetEffectWithTagExact(const FGameplayTag GameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTinda_Effect* GetEffectWithTag(const FGameplayTag GameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTinda_Effect* GetEffectWithName(const FName& _Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTinda_Effect*> GetEffectsWithTagExact(const FGameplayTag GameplayTag, bool ConsiderOnlyActivated) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTinda_Effect*> GetEffectsWithTag(const FGameplayTag GameplayTag, bool ConsiderOnlyActivated) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTinda_Effect*> GetEffectsWithName(const FName& _Name, bool _ConsiderOnlyActivated) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTinda_Effect*> GetEffectsOfClass(const TSubclassOf<UTinda_Effect> _Class, bool ConsiderOnlyActivated) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTinda_Effect* GetEffectOfClass(const TSubclassOf<UTinda_Effect> _Class) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UTinda_Effect*> GetAllEffects(bool _bOnlyActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTinda_Effect*> GetAllActivatedEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EndEffectWithTagExact(const FGameplayTag GameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EndAllEffectWithTagExact(const FGameplayTag GameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EndAllEffectWithTag(const FGameplayTag GameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EndAllEffectsOfClass(const TSubclassOf<UTinda_Effect> _Class) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddStartingEffects();
    
};

