#pragma once
#include "CoreMinimal.h"
#include "Event_AlienBreach_EndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AlienBreach_End, bool, _bSuccess);

