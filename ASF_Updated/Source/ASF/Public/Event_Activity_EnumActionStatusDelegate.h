#pragma once
#include "CoreMinimal.h"
#include "EnumActionStatus.h"
#include "Event_Activity_EnumActionStatusDelegate.generated.h"

class UActivity;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Activity_EnumActionStatus, UActivity*, Activity, EnumActionStatus, Status);

