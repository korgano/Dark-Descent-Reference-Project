#pragma once
#include "CoreMinimal.h"
#include "TMEvent.h"
#include "Templates/SubclassOf.h"
#include "CrusherEvent.generated.h"

class APawn;
class ASpawnPoint;
class UNavigationQueryFilter;
class UObject;

UCLASS(Blueprintable)
class ASF_API UCrusherEvent : public UTMEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APawn>> CrusherClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavigationFilterClass;
    
public:
    UCrusherEvent();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAlienDeferredSpawned(ASpawnPoint* SpawnPoint, UObject* SpawnedObject);
    
};

