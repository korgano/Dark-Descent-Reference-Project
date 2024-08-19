#pragma once
#include "CoreMinimal.h"
#include "ActivationFactionParams.h"
#include "EnableFactionParams.generated.h"

USTRUCT(BlueprintType)
struct FEnableFactionParams : public FActivationFactionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableAmbush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableAggressivenessIncrease;
    
    ASF_API FEnableFactionParams();
};

