#pragma once
#include "CoreMinimal.h"
#include "Event_SoftLogger_FStringDelegate.generated.h"

class USoftLogger;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_SoftLogger_FString, USoftLogger*, SoftLogger, const FString&, Message);

