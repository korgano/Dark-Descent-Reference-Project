#pragma once
#include "CoreMinimal.h"
#include "Weapon.h"
#include "WeaponCosmetic.h"
#include "MeleeWeapon.generated.h"

class AASFCharacter;
class AActor;
class UAIAction_Attack;

UCLASS(Blueprintable)
class ASF_API AMeleeWeapon : public AWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponCosmetic> WeaponCosmetics;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedWeaponCosmeticIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIAction_Attack*> AttacksAvailable;
    
public:
    AMeleeWeapon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UAIAction_Attack* SelectAttack(AActor* Target);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterInit(AWeapon* _Weapon, AASFCharacter* _Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitWeaponCosmetic();
    
    UFUNCTION(BlueprintCallable)
    void InitAttacks(const TArray<TSoftClassPtr<UAIAction_Attack>>& _AIAttackAvailable);
    
    UFUNCTION(BlueprintCallable)
    bool GetSelectedWeaponCosmetic(FWeaponCosmetic& _WeaponCosmetic);
    
};

