#pragma once
#include "CoreMinimal.h"
#include "InteractiveComponent.h"
#include "InteractiveComponent_Ally.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractiveComponent_Ally : public UInteractiveComponent {
    GENERATED_BODY()
public:
    UInteractiveComponent_Ally(const FObjectInitializer& ObjectInitializer);

};

