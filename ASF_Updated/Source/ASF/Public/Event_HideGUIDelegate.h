#pragma once
#include "CoreMinimal.h"
#include "Event_HideGUIDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_HideGUI, bool, bShow);

