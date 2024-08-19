#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EffectModifier.h"
#include "Event_TindaAttribute_Float_FloatDelegate.h"
#include "Tinda_Attribute.generated.h"

class AActor;
class ITinda_GameplayTagAssetInterface;
class UTinda_GameplayTagAssetInterface;
class UTinda_Attribute;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class TINDA_EFFECTPLUGIN_API UTinda_Attribute : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectModifier> ADD_ModifierApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectModifier> MUL_ModifierApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectModifier> SET_ModifierApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectModifier> SET_BASEVALUE_ModifierApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<ITinda_GameplayTagAssetInterface> OuterAsInterface;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TindaAttribute_Float_Float OnUpdateValue;
    
    UTinda_Attribute();

    UFUNCTION(BlueprintCallable)
    void UnregisterAttributeFromEffectHandler(AActor* ActorWithEffectHandlerComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEffectFromArray(UTinda_Effect* _EffectToRemove, TArray<FEffectModifier>& _Array);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAttributeToEffectHandler(AActor* ActorWithEffectHandlerComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnNewEffectActivated(UTinda_EffectHandlerComponent* _EffectHandler, UTinda_Effect* _Effect);
    
    UFUNCTION(BlueprintCallable)
    void OnEffectUpdated(UTinda_Effect* _Effect);
    
    UFUNCTION(BlueprintCallable)
    void OnEffectDeactivated(UTinda_Effect* _DeactivatedEffect);
    
    UFUNCTION(BlueprintCallable)
    void InitAttributeWithMinMax_BP(FGameplayTag _TagName, float _BaseValue, float _MinValue, float _MaxValue, TArray<FGameplayTag> _AdditionalTagPath);
    
    UFUNCTION(BlueprintCallable)
    void InitAttributeWithMinMax(FGameplayTag _TagName, float _BaseValue, float _MinValue, float _MaxValue, TArray<FGameplayTag> _AdditionalTagPath);
    
    UFUNCTION(BlueprintCallable)
    void InitAttribute_BP(FGameplayTag _TagName, float _BaseValue, TArray<FGameplayTag> _AdditionalTagPath);
    
    UFUNCTION(BlueprintCallable)
    void InitAttribute(FGameplayTag _TagName, float _BaseValue, TArray<FGameplayTag> _AdditionalTagPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetTagPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTagName() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FEffectModifier> GetModifiers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxValue() const;
    
    UFUNCTION(BlueprintCallable)
    static UTinda_Attribute* GetLongestAttribute(UPARAM(Ref) TArray<UTinda_Attribute*>& _Attributes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseValue() const;
    
};

