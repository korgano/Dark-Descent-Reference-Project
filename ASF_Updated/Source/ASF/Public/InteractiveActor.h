#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractiveActor.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UInteractiveActor : public UInterface {
    GENERATED_BODY()
};

class IInteractiveActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetHovered(bool bIsHovered) PURE_VIRTUAL(SetHovered,);
    
    UFUNCTION(BlueprintCallable)
    virtual void OpenInteraction() PURE_VIRTUAL(OpenInteraction,);
    
};

