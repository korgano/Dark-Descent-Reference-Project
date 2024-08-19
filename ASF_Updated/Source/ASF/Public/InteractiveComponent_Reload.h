#pragma once
#include "CoreMinimal.h"
#include "InteractiveComponent_Self.h"
#include "InteractiveComponent_Reload.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractiveComponent_Reload : public UInteractiveComponent_Self {
    GENERATED_BODY()
public:
    UInteractiveComponent_Reload(const FObjectInitializer& ObjectInitializer);

};

