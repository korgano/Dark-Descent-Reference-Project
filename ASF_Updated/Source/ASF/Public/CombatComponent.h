#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DamageResultStruct.h"
#include "EnumActionStatus.h"
#include "Event_CombatComponent_ASFCharacterDelegate.h"
#include "Event_CombatComponent_AWeaponDelegate.h"
#include "Event_CombatComponent_DamageReceiverComponentDelegate.h"
#include "Templates/SubclassOf.h"
#include "CombatComponent.generated.h"

class AASFCharacter;
class AItem;
class AWeapon;
class UActivity;
class UActivity_Reload;
class UActivity_SwapItem;
class UDamageReceiverComponent;
class UPOITargetingComponent;
class UTinda_Effect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UCombatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsePriorityTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_CombatComponent_ASFCharacter OnCharacterChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* ASFCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanShootOnNotAttackingAlien;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPOITargetingComponent* POITargetingComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_CombatComponent_DamageReceiverComponent OnDamageDealtToTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_CombatComponent_AWeapon OnEquippedWeaponChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_CombatComponent_AWeapon OnWeaponChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_CombatComponent_AWeapon OnWeaponReloaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UActivity_SwapItem> SwapItemActivityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeapon> InitialPrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeapon> InitialSecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeapon> InitialTertiaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanAttackResult;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWeapon* EquippedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWeapon* PrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWeapon* SecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWeapon* TertiaryWeapon;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActivity_Reload> ReloadActivityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAutoReload;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SwapWeaponBlockerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MainWeaponBlockerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SecondaryWeaponBlockerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Date_LastBurstEnd;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> CrouchUndercoverEffect;
    
    UCombatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSwap();
    
    UFUNCTION(BlueprintCallable)
    void UpdateReload(AWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void TryFire(float _DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponInSlot(AWeapon* _Weapon, FGameplayTag _WeaponSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetWeapon(AWeapon* _Weapon);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedWeapon(AWeapon* _Weapon);
    
    UFUNCTION(BlueprintCallable)
    void SetDate_LastBurstEnd(float _Date_LastBurstEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacter(AASFCharacter* _Character);
    
    UFUNCTION(BlueprintCallable)
    void ReloadResult(UActivity* Activity, EnumActionStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponEquippedChanged(AASFCharacter* Character, AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void NotifyDamageDealtToTarget(UDamageReceiverComponent* Target, const FDamageResultStruct& DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAllWeapons();
    
    UFUNCTION(BlueprintCallable)
    bool HasValidTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWeapon* GetWeaponForSlot(FGameplayTag _WeaponSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWeapon* GetWeaponEquiped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWeapon* GetTertiaryWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTagSlotWeaponEquiped();
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetTagAvailableWeaponBewteenPrimaryAndSecondary();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWeapon* GetSecondaryWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWeapon* GetPrimaryWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAvailableAmmoTertiaryWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAvailableAmmoSecondaryWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAvailableAmmoPrimaryWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AWeapon*> GetAllWeapons();
    
    UFUNCTION(BlueprintCallable)
    void FindTargetingComponent();
    
    UFUNCTION(BlueprintCallable)
    void EquipWeapon(FGameplayTag _WeaponCategory, bool _Instant);
    
    UFUNCTION(BlueprintCallable)
    void EnableWeaponsRender(bool _IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllWeapons();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAttack() const;
    
};

