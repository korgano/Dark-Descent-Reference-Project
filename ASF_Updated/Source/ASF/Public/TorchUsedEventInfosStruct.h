#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TorchUsedEventInfosStruct.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FTorchUsedEventInfosStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector squad_location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float duration_used;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 number_interactible_hovered;
    
    FTorchUsedEventInfosStruct();
};

