#pragma once
#include "CoreMinimal.h"
#include "OtagoEventTargetedEffect.h"
#include "OtagoEventOptionOutcome.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FOtagoEventOptionOutcome {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOtagoEventTargetedEffect> Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> EffectsOccurrence;
    
    FOtagoEventOptionOutcome();
};

