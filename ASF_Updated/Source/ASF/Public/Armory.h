#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Event_FGameplayTagDelegate.h"
#include "Room.h"
#include "WeaponUpgrade.h"
#include "Armory.generated.h"

UCLASS(Blueprintable)
class ASF_API AArmory : public ARoom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_FGameplayTag OnWeaponUpgradePurchased;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BaseUnlockedWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponUpgrade> WeaponUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UnlockedWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AvailableWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NewAvailableWeapons;
    
public:
    AArmory(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveNewAvailableWeapon(FGameplayTag _WeaponTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PurchaseWeaponUpgrade(FGameplayTag _WeaponTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWeaponUpgrade GetWeaponUpgrade(FGameplayTag _WeaponTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetPurchasableWeapons() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAllWeapons() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipWeaponUpgrade(FGameplayTag _WeaponTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAffordWeaponUpgrade(FGameplayTag _WeaponTag) const;
    
};

