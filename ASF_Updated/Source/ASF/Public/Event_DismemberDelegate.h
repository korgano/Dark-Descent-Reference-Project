#pragma once
#include "CoreMinimal.h"
#include "Event_DismemberDelegate.generated.h"

class UPhysicalReactionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Dismember, UPhysicalReactionComponent*, PhysicalReactionComponent, FName, BoneName);

