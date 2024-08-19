#pragma once
#include "CoreMinimal.h"
#include "EOtagoEventConditionLogicalOperator.h"
#include "OtagoEventCondition.h"
#include "OtagoEventConditionCollection.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FOtagoEventConditionCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOtagoEventConditionLogicalOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOtagoEventCondition> Conditions;
    
    FOtagoEventConditionCollection();
};

