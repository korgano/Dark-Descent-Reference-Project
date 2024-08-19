#pragma once
#include "CoreMinimal.h"
#include "UserSettingsEvent_BoolDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUserSettingsEvent_Bool, bool, Value);

