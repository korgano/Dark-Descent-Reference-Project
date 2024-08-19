#pragma once
#include "CoreMinimal.h"
#include "ActivationFactionParams.h"
#include "DisableFactionParams.generated.h"

USTRUCT(BlueprintType)
struct FDisableFactionParams : public FActivationFactionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableAmbush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableAggressivenessIncrease;
    
    ASF_API FDisableFactionParams();
};

