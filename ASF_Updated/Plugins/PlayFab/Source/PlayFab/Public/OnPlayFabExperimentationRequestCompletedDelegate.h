#pragma once
#include "CoreMinimal.h"
#include "PlayFabBaseModel.h"
#include "OnPlayFabExperimentationRequestCompletedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayFabExperimentationRequestCompleted, FPlayFabBaseModel, response, UObject*, customData, bool, successful);

