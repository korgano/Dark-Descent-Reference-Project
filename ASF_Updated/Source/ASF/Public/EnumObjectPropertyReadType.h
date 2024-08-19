#pragma once
#include "CoreMinimal.h"
#include "EnumObjectPropertyReadType.generated.h"

UENUM(BlueprintType)
enum class EnumObjectPropertyReadType : uint8 {
    READ_PROPERTY_NAME_ON_CLASS,
    READ_PROPERTY_NAME_ON_OBJECT,
    READ_VALUE,
    READ_NONE,
};

