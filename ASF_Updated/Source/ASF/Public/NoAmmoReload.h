#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NoAmmoReload.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FNoAmmoReload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector squad_location;
    
    FNoAmmoReload();
};

