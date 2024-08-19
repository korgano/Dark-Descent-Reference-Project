#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "RespawnHandlerComponent.generated.h"

class AAIGuardPath;
class AASFCharacter;
class ASubLevelHandler;
class ATMEventSystem;
class UFactionSystemic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API URespawnHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASubLevelHandler* SubLevelHandler;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AASFCharacter>> EnemyToRespawnClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RespawnTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDelayRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDelayRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AASFCharacter>> ClassToNotRespawn;
    
public:
    URespawnHandlerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<AASFCharacter> PopRandomEnemyFromSavePatrols();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PatrolHasToSpawnForCurrentSubLevel() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSystemicActivatedOnEventSystem(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* _Handler, const FString& _StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelBeginUnload(ASubLevelHandler* _Handler, const FString& _StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSafeZoneEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnSafeZoneDisable();
    
    UFUNCTION(BlueprintCallable)
    void OnRespawnTimerEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnExplorationTimerEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnAlienPhaseChange(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitRespawnHandlerComponent(ASubLevelHandler* _SubLevelHandler);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftClassPtr<AASFCharacter>> GetSavedPatrolEnemiesForGuardPath(AAIGuardPath* GuardPath);
    
};

