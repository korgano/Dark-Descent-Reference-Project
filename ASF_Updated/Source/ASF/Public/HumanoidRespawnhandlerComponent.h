#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HumanoidRespawnhandlerComponent.generated.h"

class ASquadSpawner;
class ASubLevelHandler;
class UAIPointOfInterestConfig;
class UAIPointOfInterestContainer;
class UPOIDefaultContainer;
class USubLevelPrimaryDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UHumanoidRespawnhandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASquadSpawner*> RegisteredSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubLevelPrimaryDataAsset* CurSubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPOIDefaultContainer* CurrentPOIContainer;
    
    UHumanoidRespawnhandlerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterHumanoidSquadSpawner(ASquadSpawner* SpawnerToUnregister);
    
    UFUNCTION(BlueprintCallable)
    void RegisterHumanoidSquadSpawner(ASquadSpawner* SpawnerToRegister);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelIsLoaded(ASubLevelHandler* SubLevelHandler, const FString& SubLevelName);
    
    UFUNCTION(BlueprintCallable)
    void OnRespawnTimerFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnPOIRemovedToContainer(UAIPointOfInterestContainer* _AIPointOfInterestContainer, UAIPointOfInterestConfig* _PointOfInterestConfig);
    
    UFUNCTION(BlueprintCallable)
    void OnPOIAddedToContainer(UAIPointOfInterestContainer* _AIPointOfInterestContainer, UAIPointOfInterestConfig* _PointOfInterestConfig);
    
    UFUNCTION(BlueprintCallable)
    bool IsSpawnerAvailableForSpawn(ASquadSpawner* Spawner) const;
    
};

