#pragma once
#include "CoreMinimal.h"
#include "InteractiveComponent_Self.h"
#include "InteractiveComponent_Stop.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractiveComponent_Stop : public UInteractiveComponent_Self {
    GENERATED_BODY()
public:
    UInteractiveComponent_Stop(const FObjectInitializer& ObjectInitializer);

};

