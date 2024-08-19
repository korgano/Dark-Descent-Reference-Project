#pragma once
#include "CoreMinimal.h"
#include "InputAxisDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FInputAxisDelegate, float, Value);

