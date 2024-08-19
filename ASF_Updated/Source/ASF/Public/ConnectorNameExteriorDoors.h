#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "ConnectorNameExteriorDoors.generated.h"

USTRUCT(BlueprintType)
struct FConnectorNameExteriorDoors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConnectorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTwinReference> ExteriorDoors;
    
    ASF_API FConnectorNameExteriorDoors();
};

