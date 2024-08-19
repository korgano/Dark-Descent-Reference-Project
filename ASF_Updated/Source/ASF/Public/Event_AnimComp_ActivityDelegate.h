#pragma once
#include "CoreMinimal.h"
#include "Event_AnimComp_ActivityDelegate.generated.h"

class UActivity;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimComp_Activity, UActivity*, Activity);

