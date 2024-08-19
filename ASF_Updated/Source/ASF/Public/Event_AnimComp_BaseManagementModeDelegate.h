#pragma once
#include "CoreMinimal.h"
#include "EnumBaseManagementMode.h"
#include "Event_AnimComp_BaseManagementModeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnimComp_BaseManagementMode, EnumBaseManagementMode, Mode);

