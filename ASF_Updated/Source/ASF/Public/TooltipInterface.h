#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TooltipData.h"
#include "TooltipInterface.generated.h"

UINTERFACE(Blueprintable)
class UTooltipInterface : public UInterface {
    GENERATED_BODY()
};

class ITooltipInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTooltipData GetTooltip() const;
    
};

