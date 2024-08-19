#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "AIPerceptionListenerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAIPerceptionListenerComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
    UAIPerceptionListenerComponent(const FObjectInitializer& ObjectInitializer);

};

