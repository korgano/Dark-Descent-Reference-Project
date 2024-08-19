#pragma once
#include "CoreMinimal.h"
#include "EPFJson.generated.h"

UENUM(BlueprintType)
namespace EPFJson {
    enum Type {
        None,
        Null,
        String,
        Number,
        Boolean,
        Array,
        Object,
    };
}

