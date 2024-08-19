#pragma once
#include "CoreMinimal.h"
#include "ESubtitleType.h"
#include "Event_AcknowsManager_FText_PDA_int32_ESubtitleTypeDelegate.generated.h"

class UAcknow_DataAsset;
class UAcknowsManagerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FEvent_AcknowsManager_FText_PDA_int32_ESubtitleType, UAcknowsManagerComponent*, AcknowsManager, FText, Text, UAcknow_DataAsset*, AcknowAsset, int32, SpeakerID, ESubtitleType, SubtitleType);

