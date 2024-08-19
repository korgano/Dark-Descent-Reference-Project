#pragma once
#include "CoreMinimal.h"
#include "PatrolEnemiesStruct.generated.h"

class AASFCharacter;
class AGameplayTwinActor;

USTRUCT(BlueprintType)
struct FPatrolEnemiesStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameplayTwinActor* TwinActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AASFCharacter>> SavedEnemiesInPatrolClasses;
    
    ASF_API FPatrolEnemiesStruct();
};

