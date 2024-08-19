#pragma once
#include "CoreMinimal.h"
#include "AIActionAlien.h"
#include "AIActionAlien_Impact.generated.h"

UCLASS(Blueprintable)
class ASF_API UAIActionAlien_Impact : public UAIActionAlien {
    GENERATED_BODY()
public:
    UAIActionAlien_Impact();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetImpactDuration();
    
};

