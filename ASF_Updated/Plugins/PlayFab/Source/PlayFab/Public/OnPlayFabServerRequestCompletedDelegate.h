#pragma once
#include "CoreMinimal.h"
#include "PlayFabBaseModel.h"
#include "OnPlayFabServerRequestCompletedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayFabServerRequestCompleted, FPlayFabBaseModel, response, UObject*, customData, bool, successful);

