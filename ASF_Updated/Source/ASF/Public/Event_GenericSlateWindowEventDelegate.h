#pragma once
#include "CoreMinimal.h"
#include "Event_GenericSlateWindowEventDelegate.generated.h"

class UUMGGenericSlateWindowComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_GenericSlateWindowEvent, UUMGGenericSlateWindowComponent*, slateWindow);

