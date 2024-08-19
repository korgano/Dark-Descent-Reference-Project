#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObjectiveCameraLockInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FObjectiveCameraLockInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString objective_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector objective_location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector squad_location;
    
    FObjectiveCameraLockInfosStruct();
};

