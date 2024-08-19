#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StructCursorHit.h"
#include "Selectable.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class USelectable : public UInterface {
    GENERATED_BODY()
};

class ISelectable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetSelected(bool _bIsSelected) PURE_VIRTUAL(SetSelected,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool Interact(FStructCursorHit _StructCursorHit, bool _bShift) PURE_VIRTUAL(Interact, return false;);
    
};

