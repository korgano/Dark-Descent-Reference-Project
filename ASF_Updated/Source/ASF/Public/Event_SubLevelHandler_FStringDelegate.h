#pragma once
#include "CoreMinimal.h"
#include "Event_SubLevelHandler_FStringDelegate.generated.h"

class ASubLevelHandler;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_SubLevelHandler_FString, ASubLevelHandler*, Handler, const FString&, StreamingLevel);

