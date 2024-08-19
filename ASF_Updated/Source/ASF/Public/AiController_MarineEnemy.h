#pragma once
#include "CoreMinimal.h"
#include "AiController_Marine.h"
#include "AiController_MarineEnemy.generated.h"

class UActivity;

UCLASS(Blueprintable)
class ASF_API AAiController_MarineEnemy : public AAiController_Marine {
    GENERATED_BODY()
public:
    AAiController_MarineEnemy(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnActivityStart(UActivity* Activity);
    
    UFUNCTION(BlueprintCallable)
    void OnActivityEnd(UActivity* Activity);
    
};

