#pragma once
#include "CoreMinimal.h"
#include "InteractiveComponent.h"
#include "InteractiveComponent_Self.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractiveComponent_Self : public UInteractiveComponent {
    GENERATED_BODY()
public:
    UInteractiveComponent_Self(const FObjectInitializer& ObjectInitializer);

};

