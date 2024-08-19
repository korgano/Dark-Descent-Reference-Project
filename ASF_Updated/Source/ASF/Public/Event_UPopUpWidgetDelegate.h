#pragma once
#include "CoreMinimal.h"
#include "Event_UPopUpWidgetDelegate.generated.h"

class UPopUpWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_UPopUpWidget, UPopUpWidget*, PopUp);

