#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HideInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FHideInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector squad_location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 squad_size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString squad_status;
    
    FHideInfosStruct();
};

