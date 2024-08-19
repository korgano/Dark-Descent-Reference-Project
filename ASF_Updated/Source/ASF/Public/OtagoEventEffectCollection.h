#pragma once
#include "CoreMinimal.h"
#include "EOtagoEventEffectLogicalOperator.h"
#include "OtagoEventEffect.h"
#include "OtagoEventEffectCollection.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FOtagoEventEffectCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOtagoEventEffectLogicalOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOtagoEventEffect> Effects;
    
    FOtagoEventEffectCollection();
};

