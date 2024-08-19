#pragma once
#include "CoreMinimal.h"
#include "AiController_Humanoid.h"
#include "HumanoidCivilian_AIController.generated.h"

UCLASS(Blueprintable)
class ASF_API AHumanoidCivilian_AIController : public AAiController_Humanoid {
    GENERATED_BODY()
public:
    AHumanoidCivilian_AIController(const FObjectInitializer& ObjectInitializer);

};

