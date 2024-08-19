#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShelterCreated.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FShelterCreated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector squad_location;
    
    FShelterCreated();
};

