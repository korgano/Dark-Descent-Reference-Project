#pragma once
#include "CoreMinimal.h"
#include "CheckBoolDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCheckBoolDelegate, bool&, Output);

