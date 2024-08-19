#pragma once
#include "CoreMinimal.h"
#include "Event_AMinimapHandlerDelegate.generated.h"

class AMinimapHandler;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AMinimapHandler, AMinimapHandler*, Handler);

