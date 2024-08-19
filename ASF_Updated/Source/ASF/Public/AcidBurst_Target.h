#pragma once
#include "CoreMinimal.h"
#include "AcidBurst_Target.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAcidBurst_Target {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    ASF_API FAcidBurst_Target();
};

