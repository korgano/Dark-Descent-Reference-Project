#pragma once
#include "CoreMinimal.h"
#include "EDisplayPropertyType.generated.h"

UENUM(BlueprintType)
enum class EDisplayPropertyType : uint8 {
    pfenum_None,
    pfenum_QueryDateTime,
    pfenum_QueryDouble,
    pfenum_QueryString,
    pfenum_SearchString,
};

