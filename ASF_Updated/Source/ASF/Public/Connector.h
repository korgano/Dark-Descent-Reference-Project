#pragma once
#include "CoreMinimal.h"
#include "Connector.generated.h"

class AActorWithGameplayTag;

USTRUCT(BlueprintType)
struct FConnector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActorWithGameplayTag* Connector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SubLevelConnected;
    
    ASF_API FConnector();
};

