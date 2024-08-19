#pragma once
#include "CoreMinimal.h"
#include "Event_AIActionComponentDelegate.generated.h"

class UMarinesAIActionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AIActionComponent, UMarinesAIActionComponent*, MarinesAIActionComponent);

