#pragma once
#include "CoreMinimal.h"
#include "Event_UInfluenceMapWeigherComponentDelegate.generated.h"

class UInfluenceMapWeigherComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_UInfluenceMapWeigherComponent, UInfluenceMapWeigherComponent*, _InfluenceMapWeigherComponent);

