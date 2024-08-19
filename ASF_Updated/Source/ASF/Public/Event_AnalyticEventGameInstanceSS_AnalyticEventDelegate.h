#pragma once
#include "CoreMinimal.h"
#include "AnalyticEvent.h"
#include "Event_AnalyticEventGameInstanceSS_AnalyticEventDelegate.generated.h"

class UAnalyticEventGameInstanceSS;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AnalyticEventGameInstanceSS_AnalyticEvent, UAnalyticEventGameInstanceSS*, _AnalyticEventGameInstanceSS, FAnalyticEvent, _Event);

