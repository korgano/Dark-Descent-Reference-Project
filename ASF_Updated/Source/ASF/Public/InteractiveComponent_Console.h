#pragma once
#include "CoreMinimal.h"
#include "InteractiveComponent_Usable.h"
#include "InteractiveComponent_Console.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractiveComponent_Console : public UInteractiveComponent_Usable {
    GENERATED_BODY()
public:
    UInteractiveComponent_Console(const FObjectInitializer& ObjectInitializer);

};

