#pragma once
#include "CoreMinimal.h"
#include "ECloudScriptRevisionOption.generated.h"

UENUM(BlueprintType)
enum class ECloudScriptRevisionOption : uint8 {
    pfenum_Live,
    pfenum_Latest,
    pfenum_Specific,
};

