#pragma once
#include "CoreMinimal.h"
#include "CharacterIDName.h"
#include "DamageResultStruct.h"
#include "TriggerInfo.h"
#include "WeaponTargetStruct.h"
#include "CharacterWeaponFireTriggerInfo.generated.h"

class AASFCharacter;
class AASFGameStateBase;
class AActor;
class AWeapon;
class UCombatComponent;

UCLASS(Blueprintable)
class ASF_API UCharacterWeaponFireTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterIDName> CharactersIDName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AASFCharacter*> CharactersTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AWeapon*> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCombatComponent*> CombatComponents;
    
public:
    UCharacterWeaponFireTriggerInfo();

protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponFire(AWeapon* _Weapon, FWeaponTargetStruct _Target, bool _bIsSuccess, const FDamageResultStruct& _DamageResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCharacterDestroyed(AActor* DestroyedActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindEventToWeapon(UCombatComponent* CombatComponent, AWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void BindEventToCharacter(AASFGameStateBase* GameState, AActor* Actor);
    
};

