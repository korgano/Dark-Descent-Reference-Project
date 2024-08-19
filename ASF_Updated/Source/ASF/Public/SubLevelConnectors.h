#pragma once
#include "CoreMinimal.h"
#include "Connector.h"
#include "SubLevelConnectors.generated.h"

USTRUCT(BlueprintType)
struct FSubLevelConnectors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConnector> Connectors;
    
    ASF_API FSubLevelConnectors();
};

