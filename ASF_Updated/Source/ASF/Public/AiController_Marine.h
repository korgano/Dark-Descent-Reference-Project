#pragma once
#include "CoreMinimal.h"
#include "AiController_Humanoid.h"
#include "AiController_Marine.generated.h"

UCLASS(Blueprintable)
class ASF_API AAiController_Marine : public AAiController_Humanoid {
    GENERATED_BODY()
public:
    AAiController_Marine(const FObjectInitializer& ObjectInitializer);

};

