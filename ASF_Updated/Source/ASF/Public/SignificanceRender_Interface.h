#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "SignificanceRender_Interface.generated.h"

UINTERFACE(MinimalAPI)
class USignificanceRender_Interface : public UInterface {
    GENERATED_BODY()
};

class ISignificanceRender_Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool ShouldChangeRenderState() const PURE_VIRTUAL(ShouldChangeRenderState, return false;);
    
    UFUNCTION()
    virtual FVector GetObjectLocation() const PURE_VIRTUAL(GetObjectLocation, return FVector{};);
    
    UFUNCTION()
    virtual FBoxSphereBounds GetObjectBounds() const PURE_VIRTUAL(GetObjectBounds, return FBoxSphereBounds{};);
    
    UFUNCTION()
    virtual void DestroyRenderState() PURE_VIRTUAL(DestroyRenderState,);
    
    UFUNCTION()
    virtual void CreateRenderState() PURE_VIRTUAL(CreateRenderState,);
    
};

