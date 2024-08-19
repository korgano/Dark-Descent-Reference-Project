#pragma once
#include "CoreMinimal.h"
#include "EnumDataModifierType.h"
#include "StructDataModifier.generated.h"

USTRUCT(BlueprintType)
struct FStructDataModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumDataModifierType DataModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DataModifierValue;
    
    ASF_API FStructDataModifier();
};

