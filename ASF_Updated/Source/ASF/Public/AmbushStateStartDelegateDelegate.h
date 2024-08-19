#pragma once
#include "CoreMinimal.h"
#include "EAmbushState.h"
#include "AmbushStateStartDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAmbushStateStartDelegate, EAmbushState, OldState);

