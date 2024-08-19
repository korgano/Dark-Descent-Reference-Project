#pragma once
#include "CoreMinimal.h"
#include "Event_SubLevelHandler_USubLevelConnectorComponentDelegate.generated.h"

class ASubLevelHandler;
class USubLevelConnectorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_SubLevelHandler_USubLevelConnectorComponent, ASubLevelHandler*, Handler, USubLevelConnectorComponent*, SubLevelConnector);

