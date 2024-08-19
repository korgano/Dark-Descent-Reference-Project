#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_PerceptionComponent_UPOIDefaultContainer_FGameplayTagDelegate.generated.h"

class UAI_POIPerceptionComponent;
class UPOIDefaultContainer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_PerceptionComponent_UPOIDefaultContainer_FGameplayTag, UAI_POIPerceptionComponent*, _PerceptionComp, UPOIDefaultContainer*, _PerceptionResult, FGameplayTag, _PerceptionTag);

