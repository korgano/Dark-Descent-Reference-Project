#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DamageResultStruct.h"
#include "DamageStruct.h"
#include "EnumWound.h"
#include "Event_Actor_DamageResultStructDelegate.h"
#include "Event_Actor_GameplayTagDelegate.h"
#include "Event_OnHealLifeDelegate.h"
#include "Event_UDamageReceiverComponent_GameplayTagDelegate.h"
#include "HitSoundStruct.h"
#include "ImpactForce.h"
#include "ImpactReaction.h"
#include "Templates/SubclassOf.h"
#include "DamageReceiverComponent.generated.h"

class AASFCharacter;
class UKillModule;
class USoundCue;
class UTinda_Effect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UDamageReceiverComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Actor_DamageResultStruct OnWoundReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Actor_GameplayTag OnWoundRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Actor_DamageResultStruct OnDamageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UDamageReceiverComponent_GameplayTag OnImpactReaction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UDamageReceiverComponent_GameplayTag OnStunReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AvailableAttackTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseImpactReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImpactReaction> ImpactReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImpactForce> Impacts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StunDamageTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ImpactQueryToRespect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> FactionDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> TypeDamageMultiplier;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_OnHealLife Event_OnHealLife;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_OnHealLife Event_OnHealArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKillModule> KillModuleClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKillModule* KillModule;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> SoundHeavyWound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> SoundLightWound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> SoundDeath;
    
    UDamageReceiverComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    bool SetDamageStruct(FDamageResultStruct& DamageResult, AASFCharacter* asCharacter, FDamageStruct& Damage);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnStunDamage(FDamageResultStruct& _DamageResult, float _OldLife, float _NewLife);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLifeChanged(FDamageResultStruct& _DamageResult, float _OldLife, float _NewLife);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnImpact(UPARAM(Ref) FDamageResultStruct& _Damage);
    
public:
    UFUNCTION(BlueprintCallable)
    void HitSfx(const FHitSoundStruct& HitSoundStruct, const FDamageResultStruct& DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void HealWound(FGameplayTag _WoundTag);
    
    UFUNCTION(BlueprintCallable)
    void HealLightWound();
    
    UFUNCTION(BlueprintCallable)
    void HealLife(float _Value);
    
    UFUNCTION(BlueprintCallable)
    void HealHeavyWound();
    
    UFUNCTION(BlueprintCallable)
    void HealArmor(float _Value);
    
    UFUNCTION(BlueprintCallable)
    EnumWound GetWoundStateForLifeValue(float _Life);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKillModule* GetKillModule() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetImpactReaction(float _ImpactForce);
    
public:
    UFUNCTION(BlueprintCallable)
    float GetImpactForce(bool _CleanImpact);
    
    UFUNCTION(BlueprintCallable)
    void GetActorHitPoints(TArray<FVector>& HitPoints);
    
    UFUNCTION(BlueprintCallable)
    FDamageResultStruct DoDamage(FDamageStruct Damage, const FHitSoundStruct& HitSoundStruct);
    
    UFUNCTION(BlueprintCallable)
    void ClearKillModule();
    
    UFUNCTION(BlueprintCallable)
    void ApplyLightWound(UPARAM(Ref) FDamageResultStruct& _Damage, TSoftClassPtr<UTinda_Effect> _ForceWoundEfFect);
    
    UFUNCTION(BlueprintCallable)
    void ApplyHeavyWound(UPARAM(Ref) FDamageResultStruct& _Damage, TSoftClassPtr<UTinda_Effect> _ForceWoundEfFect);
    
private:
    UFUNCTION(BlueprintCallable)
    void ApplyDamage(FDamageResultStruct& DamageResult, const FHitSoundStruct& HitSoundStruct);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyCritic(FDamageResultStruct& _DamageResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddImpactReaction(float _ImpactForce);
    
};

