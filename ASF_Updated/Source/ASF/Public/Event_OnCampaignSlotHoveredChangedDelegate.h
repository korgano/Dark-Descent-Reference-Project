#pragma once
#include "CoreMinimal.h"
#include "Event_OnCampaignSlotHoveredChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_OnCampaignSlotHoveredChanged, int32, _Index);

