#pragma once
#include "CoreMinimal.h"
#include "EnumFaction.h"
#include "ActivationFactionParams.generated.h"

USTRUCT(BlueprintType)
struct FActivationFactionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumFaction Faction;
    
    ASF_API FActivationFactionParams();
};

