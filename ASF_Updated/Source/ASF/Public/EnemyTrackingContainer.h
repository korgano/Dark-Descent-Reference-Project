#pragma once
#include "CoreMinimal.h"
#include "EnemyTrackingContainer.generated.h"

class AASFCharacter;

USTRUCT(BlueprintType)
struct ASF_API FEnemyTrackingContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AASFCharacter*> Enemy;
    
    FEnemyTrackingContainer();
};

