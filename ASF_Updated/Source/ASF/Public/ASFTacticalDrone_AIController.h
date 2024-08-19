#pragma once
#include "CoreMinimal.h"
#include "ASFCharacterAIController.h"
#include "ASFTacticalDrone_AIController.generated.h"

UCLASS(Blueprintable)
class ASF_API AASFTacticalDrone_AIController : public AASFCharacterAIController {
    GENERATED_BODY()
public:
    AASFTacticalDrone_AIController(const FObjectInitializer& ObjectInitializer);

};

