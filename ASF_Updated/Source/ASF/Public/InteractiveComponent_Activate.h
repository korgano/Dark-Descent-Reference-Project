#pragma once
#include "CoreMinimal.h"
#include "InteractiveComponent_Ally.h"
#include "InteractiveComponent_Activate.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractiveComponent_Activate : public UInteractiveComponent_Ally {
    GENERATED_BODY()
public:
    UInteractiveComponent_Activate(const FObjectInitializer& ObjectInitializer);

};

