#pragma once
#include "CoreMinimal.h"
#include "EOtagoEventConditionComparisonOperator.h"
#include "EOtagoEventConditionType.h"
#include "OtagoEventValue.h"
#include "OtagoEventCondition.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FOtagoEventCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOtagoEventConditionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOtagoEventConditionComparisonOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOtagoEventValue Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNot;
    
    FOtagoEventCondition();
};

