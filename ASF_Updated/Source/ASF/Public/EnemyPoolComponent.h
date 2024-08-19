#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Event_EnemyPoolComponent_ASFCharacter_BoolDelegate.h"
#include "EnemyPoolComponent.generated.h"

class AASFCharacter;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UEnemyPoolComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AASFCharacter*> Enemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AASFCharacter*> LivingEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AASFCharacter*> DeadEnemies;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_EnemyPoolComponent_ASFCharacter_Bool OnEnemyAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_EnemyPoolComponent_ASFCharacter_Bool OnEnemyRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_EnemyPoolComponent_ASFCharacter_Bool OnEnemyDeathStateChanged;
    
protected:
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // Missed Property: DeathDelegateMap
    // FunctionSignature is nullptr, cannot deduce function for 'DelegateProperty DeathDelegateMap./Script/ASF.EnemyPoolComponent:DeathDelegateMap'

    
public:
    UEnemyPoolComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveEnemy(AASFCharacter* EnemyToRemove);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDeathStateChangedOnEnemy(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLivingEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDeadEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLivingEnemiesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AASFCharacter*> GetLivingEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemiesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeadEnemiesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AASFCharacter*> GetDeadEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AASFCharacter*> GetAllEnemies() const;
    
    UFUNCTION(BlueprintCallable)
    void AddEnemy(AASFCharacter* NewEnemy);
    
};

