#pragma once
#include "CoreMinimal.h"
#include "Event_TutorialInputBinder_BoolDelegate.generated.h"

class ATutorialInputBinder;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_TutorialInputBinder_Bool, ATutorialInputBinder*, TutorialInputBinder, bool, hoverZone);

