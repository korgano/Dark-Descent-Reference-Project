#pragma once
#include "CoreMinimal.h"
#include "AlienTargetingComponent.h"
#include "FaceHuggerTargetingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UFaceHuggerTargetingComponent : public UAlienTargetingComponent {
    GENERATED_BODY()
public:
    UFaceHuggerTargetingComponent(const FObjectInitializer& ObjectInitializer);

};

