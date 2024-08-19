#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "AIActionAlien.h"
#include "EnumAttackPriority.h"
#include "EnumDodgingType.h"
#include "HitSoundStruct.h"
#include "Attack.generated.h"

class AAIController;
class AActor;
class APawn;
class UASFCharacterMovementComponent;
class UAttackComponent;
class UAttackMontageDataAsset;
class UDamagePrimaryDataAsset;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UAttack : public UAIActionAlien {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTimeLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeAcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackSelectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RangeMutipliedByScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AvailableAttackTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAttackPriority AttackPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceRadius_AttackMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDashBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScriptedAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbabilityToUseAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbabilityToUseDashToReachNextTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EnumDodgingType> ReachingMovementDodges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> DashEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> AttackEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IABattleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamagePrimaryDataAsset* DA_Damage_Attack;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* DashEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* AttackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttackComponent* AttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondeCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CooldownHandler;
    
public:
    UAttack();

protected:
    UFUNCTION(BlueprintCallable)
    void TestRotation(UASFCharacterMovementComponent* MovementComponent, bool _bRootMotion, float _Angle);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ShouldUseAttack(AAIController* OwnerController, APawn* ControlledPawn, bool FromPosition, bool allowAcceptanceRadius, bool _UseProbability);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttackAnimEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAnimHit(AActor* TargetHit, UAttackMontageDataAsset* DataAssetAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxRange();
    
    UFUNCTION(BlueprintCallable)
    float GetDamageMin();
    
    UFUNCTION(BlueprintCallable)
    float GetDamageMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttackComponent* GetAttackComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoDamage(AActor* _Target, FHitSoundStruct& HitSoundStruct);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Dash(float dashTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanDash();
    
};

