#pragma once
#include "CoreMinimal.h"
#include "DoorTagPerLevel.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FDoorTagPerLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConnectorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DoorTag;
    
    FDoorTagPerLevel();
};

