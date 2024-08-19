#pragma once
#include "CoreMinimal.h"
#include "Event_SubLevelHandler_FString_BoolDelegate.generated.h"

class ASubLevelHandler;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_SubLevelHandler_FString_Bool, ASubLevelHandler*, Handler, const FString&, StreamingLevel, bool, B);

