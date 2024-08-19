#pragma once
#include "CoreMinimal.h"
#include "PlayFabBaseModel.h"
#include "OnPlayFabDataRequestCompletedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayFabDataRequestCompleted, FPlayFabBaseModel, response, UObject*, customData, bool, successful);

