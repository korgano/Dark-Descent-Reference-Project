#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTwinReference.h"
#include "SubObjectiveComponent.h"
#include "KillSquadSubObjectiveComponent.generated.h"

class AActor;
class AGameplayTwinActor;
class ASquad;
class ASquadSpawner;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UKillSquadSubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTwinReference> SquadSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASquadSpawner*> LoadedSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASquad*> TargetSquads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NbTargetSquadsKilled;
    
public:
    UKillSquadSubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTwinActorLinked(AGameplayTwinActor* TwinActor);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetSquadSpawned(ASquadSpawner* SquadSpawner, ASquad* Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetSquadKilled(ASquad* Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetSquadEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnerEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

