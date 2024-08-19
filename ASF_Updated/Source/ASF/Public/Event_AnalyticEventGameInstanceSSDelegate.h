#pragma once
#include "CoreMinimal.h"
#include "Event_AnalyticEventGameInstanceSSDelegate.generated.h"

class UAnalyticEventGameInstanceSS;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AnalyticEventGameInstanceSS, UAnalyticEventGameInstanceSS*, _AnalyticEventGameInstanceSS);

