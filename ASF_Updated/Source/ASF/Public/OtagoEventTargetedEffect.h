#pragma once
#include "CoreMinimal.h"
#include "OtagoEventEffect.h"
#include "OtagoEventValue.h"
#include "OtagoEventTargetedEffect.generated.h"

USTRUCT(BlueprintType)
struct ASF_API FOtagoEventTargetedEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOtagoEventEffect Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOtagoEventValue Target;
    
    FOtagoEventTargetedEffect();
};

