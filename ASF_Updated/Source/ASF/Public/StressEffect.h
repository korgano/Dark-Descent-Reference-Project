#pragma once
#include "CoreMinimal.h"
#include "Tinda_Effect.h"
#include "StressEffect.generated.h"

class AHumanoid;

UCLASS(Blueprintable)
class ASF_API UStressEffect : public UTinda_Effect {
    GENERATED_BODY()
public:
    UStressEffect();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAvailableForMarine(AHumanoid* _Humanoid);
    
};

