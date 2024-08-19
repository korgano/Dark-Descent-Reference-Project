#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AIAction.h"
#include "EnumAttackPriority.h"
#include "HitSoundStruct.h"
#include "AIAction_Attack.generated.h"

class AAIController;
class AASFCharacter;
class AActor;
class APawn;
class UAIActionComponent;
class UASFCharacterMovementComponent;
class UAttackMontageDataAsset;
class UDamagePrimaryDataAsset;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UAIAction_Attack : public UAIAction {
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
    bool bAnticipateTargetMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartFromFurtherDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FurtherDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbabilityToUseAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbabilityToUseDashToReachNextTarget;
    
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
    AASFCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* CharacterController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* DashEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* AttackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIActionComponent* ActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondeCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CooldownHandler;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* DisableRotationAfterHit;
    
public:
    UAIAction_Attack();

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
    AASFCharacter* GetCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAttackHitSoundStruct(UAttackMontageDataAsset* DataAssetAttack, FHitSoundStruct& HitSoundStruct);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIActionComponent* GetAttackComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoDamage(AActor* _Target, FHitSoundStruct& HitSoundStruct);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Dash(float dashTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanDash();
    
};

