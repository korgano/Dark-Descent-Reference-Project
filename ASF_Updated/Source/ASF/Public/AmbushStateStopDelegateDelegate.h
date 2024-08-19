#pragma once
#include "CoreMinimal.h"
#include "EAmbushState.h"
#include "AmbushStateStopDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAmbushStateStopDelegate, EAmbushState, NewState);

