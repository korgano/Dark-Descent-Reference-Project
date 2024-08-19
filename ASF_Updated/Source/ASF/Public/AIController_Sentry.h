#pragma once
#include "CoreMinimal.h"
#include "ASFCharacterAIController.h"
#include "AIController_Sentry.generated.h"

UCLASS(Blueprintable)
class ASF_API AAIController_Sentry : public AASFCharacterAIController {
    GENERATED_BODY()
public:
    AAIController_Sentry(const FObjectInitializer& ObjectInitializer);

};

