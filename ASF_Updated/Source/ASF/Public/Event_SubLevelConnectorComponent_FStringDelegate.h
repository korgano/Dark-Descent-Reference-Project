#pragma once
#include "CoreMinimal.h"
#include "Event_SubLevelConnectorComponent_FStringDelegate.generated.h"

class USubLevelConnectorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_SubLevelConnectorComponent_FString, USubLevelConnectorComponent*, SubLevelConnector, const FString&, ConnectorName);

