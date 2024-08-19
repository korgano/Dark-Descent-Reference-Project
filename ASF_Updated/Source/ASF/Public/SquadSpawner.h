#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorWithGameplayTag.h"
#include "CharacterIDName.h"
#include "EnumSquadType.h"
#include "Event_Spawner_SquadSpawnedDelegate.h"
#include "SpawnedHumanCustomLoot.h"
#include "SquadSpawner.generated.h"

class AAIGuardPath;
class AASFGameModeBase_TacticalMode;
class AASFGameState_TacticalMode;
class AActor;
class AGuardRoom;
class AMission;
class ASquad;
class ASubLevelHandler;
class UMarineClassDataAssets;
class USquadClassDataAsset;

UCLASS(Blueprintable)
class ASF_API ASquadSpawner : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsASquadRespawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASquad> SquadToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnAtMissionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMarineClassDataAssets*> SquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterIDName> CharactersIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USquadClassDataAsset* SquadDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGuardRoom* GuardedRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumSquadType DefaultBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIGuardPath* PatrolPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnOnIdlePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> StartingPoints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* AssociatedSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 AssociatedSquadID;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Spawner_SquadSpawned OnSquadSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FCharacterIDName, FSpawnedHumanCustomLoot> CustomLootPerIDs;
    
    ASquadSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static ASquad* SpawnSquadConfigured(AActor* Context, FTransform _Transform, const TSoftClassPtr<ASquad>& _SquadToSpawn, const TArray<UMarineClassDataAssets*>& _SquadMembers, USquadClassDataAsset* _SquadDataAsset);
    
    UFUNCTION(BlueprintCallable)
    ASquad* SpawnSquad(FTransform _Transform);
    
    UFUNCTION(BlueprintCallable)
    void SetAssociatedSquadID(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetSquadKilled(ASquad* Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelHandlerLoad(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadListChanged(ASquad* _Squad, bool _Added);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnSquad();
    
    UFUNCTION(BlueprintCallable)
    void OnMissionRegistered(AASFGameState_TacticalMode* GameState, AMission* Mission);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAssociatedSquadID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASquad* GetAssociatedSquad();
    
    UFUNCTION(BlueprintCallable)
    void FinalizeSpawn();
    
    UFUNCTION(BlueprintCallable)
    bool CanSpawnOnIdlePoints();
    
};

