#pragma once
#include "CoreMinimal.h"
#include "InteractiveComponent.h"
#include "InteractiveComponent_Usable.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractiveComponent_Usable : public UInteractiveComponent {
    GENERATED_BODY()
public:
    UInteractiveComponent_Usable(const FObjectInitializer& ObjectInitializer);

};

