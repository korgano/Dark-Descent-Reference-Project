#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "DamageResultStruct.h"
#include "Event_WeaponDelegate.h"
#include "Event_Weapon_bool_DamageStruct_DamageResultStructDelegate.h"
#include "Event_Weapon_intDelegate.h"
#include "Weapon.h"
#include "WeaponTargetStruct.h"
#include "RangeWeapon.generated.h"

class UStaticMeshComponent;
class UTinda_Attribute;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API ARangeWeapon : public AWeapon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentNbBulletInMagazine;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Weapon_int OnBulletInMagazineChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Weapon OnRangeWeaponFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Weapon_bool_DamageStruct_DamageResultStruct OnDamageResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFiringCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> FiringEffectClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* FiringEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FiringCycle_NbBulletFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FiringCycle_NbBulletToFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FiringCycle_DelayBetweenBullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FiringCycle_DateLastFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UStaticMeshComponent*> UpgradeMeshes;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // Missed Property: UpgradeChangeDelegates
    // FunctionSignature is nullptr, cannot deduce function for 'DelegateProperty UpgradeChangeDelegates./Script/ASF.RangeWeapon:UpgradeChangeDelegates'

    
public:
    ARangeWeapon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpgradeTagChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag EffectTag, bool bAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopSound_Firing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FDamageResultStruct SimulateProjectile(FWeaponTargetStruct _Target, bool IsSuccess, bool ForceEndSimulateProjectile, bool _UseAmmo, bool _DisableExpensiveEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetUpgradeVisible(FGameplayTag _UpgradeTag, bool _Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentNbBulletInMagazine(const int32 _CurrentNbBulletInMagazine);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySound_NoAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySound_Firing();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNotFiring();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MaxNbBulletInMagazineUpdate(UTinda_Attribute* _Attribute, float _OldValue, float _NewValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void LastBulletFired();
    
    UFUNCTION(BlueprintCallable)
    bool HaveToReload();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetSecondaryMuzzleTransform();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNbBulletToFireAtFrame(float& _OverTime);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNbBulletByFiringCycle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetMuzzleTransform();
    
    UFUNCTION(BlueprintCallable)
    FVector GetLocationToFireAt(bool _bIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentNbBulletInMagazine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GenerateAccuracyError(FVector _TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void EndFiringCycle();
    
    UFUNCTION(BlueprintCallable)
    bool CanAttack();
    
};

