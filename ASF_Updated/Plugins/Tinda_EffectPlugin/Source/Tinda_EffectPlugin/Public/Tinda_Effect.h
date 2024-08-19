#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EnumStackingPolicy.h"
#include "EnumTryApplyEffectResult.h"
#include "Event_UTinda_EffectDelegate.h"
#include "LinkedEffectSettings.h"
#include "Modifier.h"
#include "Tinda_Effect.generated.h"

class AActor;
class UDataAsset;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class TINDA_EFFECTPLUGIN_API UTinda_Effect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> EffectsTagToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery QueryToRespect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FModifier> Modifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinkedEffectSettings> LinkedEffects_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bNeedToBeSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* PDAHoldingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameOfPropertyHoldingDurationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Duration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float TimeOfApplication;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EnumStackingPolicy StackingPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumActiveParallelEffects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetAsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UTinda_Effect OnEffectActivate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UTinda_Effect OnEffectDeactivate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UTinda_Effect OnEndDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UTinda_Effect OnEffectUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStased;
    
public:
    UTinda_Effect();

    UFUNCTION(BlueprintCallable)
    void UpdateEffect();
    
    UFUNCTION(BlueprintCallable)
    EnumTryApplyEffectResult TryApply(UObject* _Source, AActor* _Target);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStased(bool _IsStased);
    
    UFUNCTION(BlueprintCallable)
    void OnEndDurationEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStased() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTinda_EffectHandlerComponent* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingDuration() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContextObject"))
    static UTinda_Effect* FastCreateEffect(UObject* _WorldContextObject, FName _Name, TArray<FGameplayTag> _EffectsTagToApply, TArray<FModifier> _Modifiers, FGameplayTagQuery _QueryToRespect, bool _bNeedToBeSaved, EnumStackingPolicy _StackingPolicy, float _Duration);
    
    UFUNCTION(BlueprintCallable)
    static UTinda_Effect* FastCreateAndTryApplyEffect(UObject* _Source, AActor* _Target, FName _Name, TArray<FGameplayTag> _EffectsTagToApply, TArray<FModifier> _Modifiers, FGameplayTagQuery _QueryToRespect, bool _bNeedToBeSaved, EnumStackingPolicy _StackingPolicy, float _Duration);
    
    UFUNCTION(BlueprintCallable)
    void EndEffect();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EffectTick(UTinda_EffectHandlerComponent* Handler);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeactivateEffect();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContextObject"))
    static UTinda_Effect* CreateTindaEffectWithClass(UObject* _WorldContextObject, TSoftClassPtr<UTinda_Effect> _EffectClass);
    
    UFUNCTION(BlueprintCallable)
    static UTinda_Effect* CreateAndTryApplyTindaEffectWithClass(UObject* _Source, AActor* _Target, TSoftClassPtr<UTinda_Effect> _EffectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ComputeDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeforeSaving();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AnotherEffectActivationUpdated(UTinda_EffectHandlerComponent* EffectHandler, UTinda_Effect* Effect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateEffect();
    
};

