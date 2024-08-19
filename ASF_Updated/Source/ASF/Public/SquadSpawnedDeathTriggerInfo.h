#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "TriggerInfo.h"
#include "SquadSpawnedDeathTriggerInfo.generated.h"

class ASquadSpawner;

UCLASS(Blueprintable)
class ASF_API USquadSpawnedDeathTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTwinReference squadSpawnerTwinRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquadSpawner* squadSpawnerRef;
    
    USquadSpawnedDeathTriggerInfo();

};

