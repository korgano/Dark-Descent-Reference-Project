#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_UPOI_NavBlockerComponent_FGameplayTagDelegate.generated.h"

class UPOI_NavBlockerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UPOI_NavBlockerComponent_FGameplayTag, UPOI_NavBlockerComponent*, POI_NavBlockerComponent, FGameplayTag, _Faction);

