#pragma once
#include "CoreMinimal.h"
#include "StructDataModifierContainer.generated.h"

class UPOIDataModifier;

USTRUCT(BlueprintType)
struct FStructDataModifierContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPOIDataModifier*> DataModifiers;
    
    ASF_API FStructDataModifierContainer();
};

