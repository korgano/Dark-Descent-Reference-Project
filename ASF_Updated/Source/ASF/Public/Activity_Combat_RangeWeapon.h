#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Activity.h"
#include "EnumCombatRangeWeaponStep.h"
#include "Activity_Combat_RangeWeapon.generated.h"

class AActor;
class UAnimationComponentHumanoid;
class UCombatComponent;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UActivity_Combat_RangeWeapon : public UActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatComponent* CombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimationComponentHumanoid* AnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumCombatRangeWeaponStep CombatRangeWeaponStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> CantRunEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> FireAtWillEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> TargetedEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* CantRunEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* FireAtWillEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* TargetedEffect;
    
public:
    UActivity_Combat_RangeWeapon();

    UFUNCTION(BlueprintCallable)
    void OnEndFiring();
    
    UFUNCTION(BlueprintCallable)
    void Firing();
    
    UFUNCTION(BlueprintCallable)
    void AimAtTarget();
    
};

