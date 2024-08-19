#pragma once
#include "CoreMinimal.h"
#include "Event_SlateWindowEventDelegate.generated.h"

class UUMGSlateWindowComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_SlateWindowEvent, UUMGSlateWindowComponent*, slateWindow);

