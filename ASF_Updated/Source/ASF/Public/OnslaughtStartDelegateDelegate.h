#pragma once
#include "CoreMinimal.h"
#include "OnslaughtStartDelegateDelegate.generated.h"

class UGenericOnslaughtEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnslaughtStartDelegate, UGenericOnslaughtEffect*, OnslaughtEffect);

