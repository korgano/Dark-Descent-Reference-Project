#pragma once
#include "CoreMinimal.h"
#include "DynDelegate_AcknowsManager_PDA_int32Delegate.generated.h"

class UAcknow_DataAsset;
class UAcknowsManagerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDynDelegate_AcknowsManager_PDA_int32, UAcknowsManagerComponent*, AcknowsManager, UAcknow_DataAsset*, AcknowAsset, int32, SpeakerID);

