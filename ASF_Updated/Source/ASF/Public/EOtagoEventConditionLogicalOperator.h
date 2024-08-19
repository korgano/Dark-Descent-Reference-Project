#pragma once
#include "CoreMinimal.h"
#include "EOtagoEventConditionLogicalOperator.generated.h"

UENUM(BlueprintType)
enum class EOtagoEventConditionLogicalOperator : uint8 {
    ALL_CONDITIONS,
    ANY_CONDITION,
};

