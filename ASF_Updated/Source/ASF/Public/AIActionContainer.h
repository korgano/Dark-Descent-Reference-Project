#pragma once
#include "CoreMinimal.h"
#include "AIActionContainer.generated.h"

class UAIAction;

USTRUCT(BlueprintType)
struct ASF_API FAIActionContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIAction*> AIActions;
    
    FAIActionContainer();
};

