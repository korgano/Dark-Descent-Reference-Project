#pragma once
#include "CoreMinimal.h"
#include "Event_SubLevelHandler_FString_FStringDelegate.generated.h"

class ASubLevelHandler;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_SubLevelHandler_FString_FString, ASubLevelHandler*, Handler, const FString&, SubLevel, const FString&, StreamingLevel);

