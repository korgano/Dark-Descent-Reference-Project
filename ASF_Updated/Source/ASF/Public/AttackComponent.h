#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "AttackTargetProperties.h"
#include "Event_AttackSelectedDelegate.h"
#include "Event_UAttackComponent_UAttackDelegate.h"
#include "AttackComponent.generated.h"

class AAIController;
class AASFCharacter;
class AASFCharacterAIController;
class AActor;
class ASubLevelHandler;
class UAIActionComponent;
class UAttack;
class UTinda_Effect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAttack*> Attacks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AttackSelected OnCharacterChangeAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UAttackComponent_UAttack OnAttackEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* ASFCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacterAIController* ASFController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIActionComponent* AIActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttack* SelectedAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* TargetAttackedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanOverrideCurrentAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeneralCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTimeLaunch;
    
public:
    UAttackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UpdateSelectedAttack(bool _CanOverrideAttack, bool _OnlyUseableAttack);
    
    UFUNCTION(BlueprintCallable)
    bool StopAttack(UAttack* _Attack);
    
    UFUNCTION(BlueprintCallable)
    bool StartAttack();
    
    UFUNCTION(BlueprintCallable)
    UAttack* SelectAttack(UAttack* _SelectedAttack, bool _CanBeOverride);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttackedEffectToTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttack* GetSelectedAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingCD() const;
    
    UFUNCTION(BlueprintCallable)
    float GetClosestAttackRange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanOverrideCurrentAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAttackTargetProperties> GetAvaillableAttack(AAIController* AiControllerAlien, bool FromPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAttack* GetAttackWithTag(FGameplayTag _Attacktag) const;
    
    UFUNCTION(BlueprintCallable)
    void BeginSubLevelUnLoad(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void AddAttackedEffectToTarget(AActor* _Target, TSoftClassPtr<UTinda_Effect> AttackedEffectClass);
    
};

