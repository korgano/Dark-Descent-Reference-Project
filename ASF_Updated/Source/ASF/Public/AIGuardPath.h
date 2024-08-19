#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "CharacterIDName.h"
#include "GuardPathAvailabilityDelegateDelegate.h"
#include "PairInt.h"
#include "Templates/SubclassOf.h"
#include "AIGuardPath.generated.h"

class AAIGuardPath;
class AASFCharacter;
class AASFRecastNavMesh;
class APawn;
class ASpawnPoint;
class ASubLevelHandler;
class UNavigationQueryFilter;
class UObject;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API AAIGuardPath : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpawnPoint*> GuardSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpawnPoint* ForcedGuardSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GuardPathRefilled;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAlien;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AASFCharacter>> AliensSpawnedAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> GuardPositions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuardPathAvailabilityDelegate OnAvailabilityChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AASFCharacter*> GuardingEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FCharacterIDName> ForcedCharacters;
    
    AAIGuardPath(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryRespawnAfterTransition();
    
    UFUNCTION(BlueprintCallable)
    void SpawnPatrol(const TSoftClassPtr<AASFCharacter>& _patrolClass, const FGameplayTag& Faction);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AAIGuardPath*> SortGuardPathByDistanceToLocation(TArray<AAIGuardPath*> _GuardPaths, FVector _Location);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedGuardSpawnPoint(ASpawnPoint* InForcedGuardSpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEnemyToPath(AASFCharacter* _Enemy);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnPointAvailabilityChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnAlienSpawned(ASpawnPoint* SpawnPoint, APawn* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnAlienDeferredSpawned(ASpawnPoint* SpawnPoint, UObject* SpawnedObject);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool IsGuardPathFull(AAIGuardPath* _GuardPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyAvailableSpawnPointForFaction(const FGameplayTag& Faction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyAvailableSpawnPoint() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<AAIGuardPath*> GuardPath_FilterByIsFull(const TArray<AAIGuardPath*>& _GuardPaths, bool _bIsFull);
    
protected:
    UFUNCTION(BlueprintCallable)
    ASpawnPoint* GetSpawnPointToSpawnFromForFaction(const FGameplayTag& Faction);
    
public:
    UFUNCTION(BlueprintCallable)
    static TArray<ASpawnPoint*> GetSpawnPoints(const TArray<AAIGuardPath*>& _GuardPaths);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetRandomSafePositionInPath(APawn* _Pawn, TSubclassOf<UNavigationQueryFilter> _navFilter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetRandomPositionInPath();
    
    UFUNCTION(BlueprintCallable)
    static AAIGuardPath* GetRandomGuardPathAccessible(TSubclassOf<UNavigationQueryFilter> _navFilter, AASFCharacter* _Enemy, bool _DiscardIfFull);
    
    UFUNCTION(BlueprintCallable)
    static AAIGuardPath* GetRandomGuardPath(bool _DiscardIfFull);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumRemainingPlaces() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOtherGuardingEnemies(AASFCharacter* _Enemy, bool IncludePatrolsAboutToSpawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumGuardingEnemies(bool IncludePatrolsAboutToSpawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASpawnPoint*> GetGuardSpawnPoints() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<AAIGuardPath*> GetGuardPath();
    
    UFUNCTION(BlueprintCallable)
    static float GetDistanceFromGuardPathToLocation(const AAIGuardPath* _GuardPath, FVector _Location);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetClosestPointFromGuardPathToLocation(const AAIGuardPath* _GuardPath, FVector _Location);
    
    UFUNCTION(BlueprintCallable)
    TArray<FPairInt> GetACM();
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FString> CheckGuardPathPositions(AASFRecastNavMesh* _ASFRecastNavMesh);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpawnForFaction(const FGameplayTag& Faction) const;
    
    UFUNCTION(BlueprintCallable)
    void AddEnemyToPath(AASFCharacter* _Enemy);
    
};

