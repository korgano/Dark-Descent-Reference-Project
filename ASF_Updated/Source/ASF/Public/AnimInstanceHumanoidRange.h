#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AnimInstanceHumanoid.h"
#include "DamageResultStruct.h"
#include "EnumCharacterAimingState.h"
#include "WeaponTargetStruct.h"
#include "AnimInstanceHumanoidRange.generated.h"

class AWeapon;
class UAnimMontage;
class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class ASF_API UAnimInstanceHumanoidRange : public UAnimInstanceHumanoid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReloadMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotReloadName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFireShotGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerFireShotgun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCharacterAimingState AimingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWeapon* CurrentWeaponEquiped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFireing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fBlendTimeFireing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlphaAImingVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle FireTimerHandle;
    
public:
    UAnimInstanceHumanoidRange();

    UFUNCTION(BlueprintCallable)
    void StopShotgunBlast();
    
    UFUNCTION(BlueprintCallable)
    void StopReload();
    
    UFUNCTION(BlueprintCallable)
    void StopFlameThrowBlast();
    
    UFUNCTION(BlueprintCallable)
    void StopFire();
    
    UFUNCTION(BlueprintCallable)
    void StartShotgunBlast(bool Activate, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void StartFlameThrowBlast();
    
    UFUNCTION(BlueprintCallable)
    void SetFire(bool bIsFire);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAimingState(EnumCharacterAimingState NewAimingState);
    
public:
    UFUNCTION(BlueprintCallable)
    void Reload(float fDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponFire(AWeapon* Weapon, FWeaponTargetStruct Target, bool bIsSuccess, const FDamageResultStruct& DamageResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimSequenceBase* GetReloadAnim();
    
};

