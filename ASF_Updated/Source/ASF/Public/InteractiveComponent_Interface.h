#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractiveComponent_Interface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UInteractiveComponent_Interface : public UInterface {
    GENERATED_BODY()
};

class IInteractiveComponent_Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetDescriptionWithPDAValue();
    
};

