#pragma once
#include "CoreMinimal.h"
#include "PlayFabBaseModel.h"
#include "OnPlayFabEventsRequestCompletedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayFabEventsRequestCompleted, FPlayFabBaseModel, response, UObject*, customData, bool, successful);

