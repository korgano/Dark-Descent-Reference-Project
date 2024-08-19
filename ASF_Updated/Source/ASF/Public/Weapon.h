#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ECoverType.h"
#include "Event_WeaponDelegate.h"
#include "Event_Weapon_ASFCharacterDelegate.h"
#include "Event_Weapon_DamageDelegate.h"
#include "Event_Weapon_FireDelegate.h"
#include "Item.h"
#include "WeaponTargetStruct.h"
#include "Weapon.generated.h"

class AActor;
class UActivity_Combat_RangeWeapon;
class UTinda_Effect;
class UWeaponPrimaryDataAsset;
class UWeaponStatComponent;

UCLASS(Blueprintable)
class ASF_API AWeapon : public AItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Weapon_ASFCharacter OnCharacterChange;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Weapon OutOfAmmunition;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Weapon_Damage OnWeaponFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Weapon_Fire OnWeaponEndFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Weapon_Fire OnWeaponStartFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Weapon_Fire OnLastBulletFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLastBulletFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UActivity_Combat_RangeWeapon> Activity_Combat_RangeWeaponClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTinda_Effect*> EffectsAppliedByWeapon;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponPrimaryDataAsset* WeaponPrimaryDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponStatComponent* WeaponStatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform WeaponStoredOffset;
    
    AWeapon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickWeapon(float _DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponUnEquiped();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponEquiped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetAimedAt() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAttackAgainstTargetIsASuccess(AActor* _Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveToDisplayProjectileDebug();
    
    UFUNCTION(BlueprintCallable)
    void GetWeaponCompatibility(FGameplayTagContainer& _TagContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPrecisionToAttackTarget(AActor* _Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHitChanceToAttackTarget(AActor* _Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDodgeValueForRunning(AActor* _Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDodgeValueForFaction(AActor* _Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDodgeValueForCover(AActor* _Target, ECoverType _CoverType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccuracyBonusForFlare(AActor* _Target);
    
    UFUNCTION(BlueprintCallable)
    void EnableWeaponRender(bool _IsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Attack(FWeaponTargetStruct _Target);
    
};

