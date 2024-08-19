#pragma once
#include "CoreMinimal.h"
#include "ImpactForce.generated.h"

USTRUCT(BlueprintType)
struct FImpactForce {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactForce;
    
    ASF_API FImpactForce();
};

