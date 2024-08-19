#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SubLevelConnectorComponentStruct.generated.h"

USTRUCT(BlueprintType)
struct FSubLevelConnectorComponentStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConnectorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LevelTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsATrueConnector;
    
    ASF_API FSubLevelConnectorComponentStruct();
};

