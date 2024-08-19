#pragma once
#include "CoreMinimal.h"
#include "EventBroadcastParams.h"
#include "OnslaughtEventBroadcastDelegateDelegate.generated.h"

class UGenericOnslaughtEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnslaughtEventBroadcastDelegate, UGenericOnslaughtEffect*, OnslaughtEffect, const FEventBroadcastParams&, EventParams);

